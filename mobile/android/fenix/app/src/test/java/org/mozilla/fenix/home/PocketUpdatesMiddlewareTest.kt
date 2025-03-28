/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

package org.mozilla.fenix.home

import androidx.datastore.core.DataStore
import io.mockk.coVerify
import io.mockk.every
import io.mockk.mockk
import io.mockk.spyk
import io.mockk.verify
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow
import kotlinx.coroutines.flow.flowOf
import mozilla.components.service.pocket.PocketStoriesService
import mozilla.components.service.pocket.PocketStory.ContentRecommendation
import mozilla.components.service.pocket.PocketStory.PocketRecommendedStory
import mozilla.components.service.pocket.PocketStory.SponsoredContent
import mozilla.components.service.pocket.PocketStory.SponsoredContentCallbacks
import mozilla.components.support.test.ext.joinBlocking
import mozilla.components.support.test.rule.MainCoroutineRule
import mozilla.components.support.test.rule.runTestOnMain
import org.junit.Rule
import org.junit.Test
import org.mozilla.fenix.components.AppStore
import org.mozilla.fenix.components.appstate.AppAction.ContentRecommendationsAction
import org.mozilla.fenix.components.appstate.AppState
import org.mozilla.fenix.components.appstate.recommendations.ContentRecommendationsState
import org.mozilla.fenix.datastore.SelectedPocketStoriesCategories
import org.mozilla.fenix.datastore.SelectedPocketStoriesCategories.SelectedPocketStoriesCategory
import org.mozilla.fenix.home.pocket.PocketImpression
import org.mozilla.fenix.home.pocket.PocketRecommendedStoriesCategory
import org.mozilla.fenix.home.pocket.PocketRecommendedStoriesSelectedCategory

class PocketUpdatesMiddlewareTest {
    @get:Rule
    val mainCoroutineTestRule = MainCoroutineRule()

    @Test
    fun `WHEN PocketStoriesShown is dispatched THEN update PocketStoriesService`() = runTestOnMain {
        val story1 = PocketRecommendedStory(
            "title",
            "url1",
            "imageUrl",
            "publisher",
            "category",
            0,
            timesShown = 0,
        )
        val story2 = story1.copy("title2", "url2")
        val story3 = story1.copy("title3", "url3")
        val pocketService: PocketStoriesService = mockk(relaxed = true)
        val pocketMiddleware = PocketUpdatesMiddleware(lazy { pocketService }, mockk(), this)
        val appstore = AppStore(
            AppState(
                recommendationState = ContentRecommendationsState(
                    pocketStories = listOf(story1, story2, story3),
                ),
            ),
            listOf(pocketMiddleware),
        )

        appstore.dispatch(
            ContentRecommendationsAction.PocketStoriesShown(
                impressions = listOf(
                    PocketImpression(
                        story = story2,
                        position = 1,
                    ),
                ),
            ),
        ).joinBlocking()

        coVerify { pocketService.updateStoriesTimesShown(listOf(story2.copy(timesShown = 1))) }
    }

    @Test
    fun `WHEN needing to persist impressions is called THEN update PocketStoriesService`() = runTestOnMain {
        val story = PocketRecommendedStory(
            "title",
            "url1",
            "imageUrl",
            "publisher",
            "category",
            0,
            timesShown = 3,
        )
        val recommendation = ContentRecommendation(
            corpusItemId = "0",
            scheduledCorpusItemId = "1",
            url = "testUrl",
            title = "",
            excerpt = "",
            topic = "",
            publisher = "",
            isTimeSensitive = false,
            imageUrl = "",
            tileId = 1,
            receivedRank = 33,
            recommendedAt = 1L,
            impressions = 0,
        )
        val sponsoredContent = SponsoredContent(
            url = "https://firefox.com",
            title = "Firefox",
            callbacks = SponsoredContentCallbacks(
                clickUrl = "https://firefox.com/click",
                impressionUrl = "https://firefox.com/impression",
            ),
            imageUrl = "https://test.com/image1.jpg",
            domain = "firefox.com",
            excerpt = "Mozilla Firefox",
            sponsor = "Mozilla",
            blockKey = "1",
            caps = mockk(relaxed = true),
            priority = 3,
        )
        val stories = listOf(story, recommendation, sponsoredContent)
        val expectedStoryUpdate = story.copy(timesShown = story.timesShown.inc())
        val expectedRecommendationUpdate = recommendation.copy(impressions = recommendation.impressions.inc())

        val pocketService: PocketStoriesService = mockk(relaxed = true)

        persistStoriesImpressions(
            coroutineScope = this,
            pocketStoriesService = pocketService,
            updatedStories = stories,
        )

        coVerify {
            pocketService.updateStoriesTimesShown(listOf(expectedStoryUpdate))
            pocketService.updateRecommendationsImpressions(listOf(expectedRecommendationUpdate))
            pocketService.recordSponsoredContentImpressions(impressions = listOf(sponsoredContent.url))
        }
    }

    @Test
    @Suppress("UNCHECKED_CAST")
    fun `WHEN PocketStoriesCategoriesChange is dispatched THEN intercept and dispatch PocketStoriesCategoriesSelectionsChange`() = runTestOnMain {
        val persistedSelectedCategory: SelectedPocketStoriesCategory = mockk {
            every { name } returns "testCategory"
            every { selectionTimestamp } returns 123
        }
        val persistedSelectedCategories: SelectedPocketStoriesCategories = mockk {
            every { valuesList } returns mutableListOf(persistedSelectedCategory)
        }
        val dataStore: DataStore<SelectedPocketStoriesCategories> =
            mockk<FakeDataStore<SelectedPocketStoriesCategories>>(relaxed = true) {
                every { data } returns flowOf(persistedSelectedCategories)
            } as DataStore<SelectedPocketStoriesCategories>
        val currentCategories = listOf(mockk<PocketRecommendedStoriesCategory>())
        val pocketMiddleware = PocketUpdatesMiddleware(mockk(), dataStore, this)
        val appStore = spyk(
            AppStore(
                AppState(
                    recommendationState = ContentRecommendationsState(
                        pocketStoriesCategories = currentCategories,
                    ),
                ),
                listOf(pocketMiddleware),
            ),
        )

        appStore.dispatch(ContentRecommendationsAction.PocketStoriesCategoriesChange(currentCategories)).joinBlocking()

        verify {
            appStore.dispatch(
                ContentRecommendationsAction.PocketStoriesCategoriesSelectionsChange(
                    storiesCategories = currentCategories,
                    categoriesSelected = listOf(
                        PocketRecommendedStoriesSelectedCategory("testCategory", 123),
                    ),
                ),
            )
        }
    }

    @Test
    @Suppress("UNCHECKED_CAST")
    fun `WHEN SelectPocketStoriesCategory is dispatched THEN persist details in DataStore`() = runTestOnMain {
        val categ1 = PocketRecommendedStoriesCategory("categ1")
        val categ2 = PocketRecommendedStoriesCategory("categ2")
        val dataStore: DataStore<SelectedPocketStoriesCategories> =
            mockk<FakeDataStore<SelectedPocketStoriesCategories>>(relaxed = true) as
                DataStore<SelectedPocketStoriesCategories>
        val pocketMiddleware = PocketUpdatesMiddleware(mockk(), dataStore, this)
        val appStore = spyk(
            AppStore(
                AppState(
                    recommendationState = ContentRecommendationsState(
                        pocketStoriesCategories = listOf(categ1, categ2),
                    ),
                ),
                listOf(pocketMiddleware),
            ),
        )

        appStore.dispatch(ContentRecommendationsAction.SelectPocketStoriesCategory(categ2.name)).joinBlocking()

        // Seems like the most we can test is that an update was made.
        coVerify { dataStore.updateData(any()) }
    }

    @Test
    @Suppress("UNCHECKED_CAST")
    fun `WHEN DeselectPocketStoriesCategory is dispatched THEN persist details in DataStore`() = runTestOnMain {
        val categ1 = PocketRecommendedStoriesCategory("categ1")
        val categ2 = PocketRecommendedStoriesCategory("categ2")
        val dataStore: DataStore<SelectedPocketStoriesCategories> =
            mockk<FakeDataStore<SelectedPocketStoriesCategories>>(relaxed = true) as
                DataStore<SelectedPocketStoriesCategories>
        val pocketMiddleware = PocketUpdatesMiddleware(mockk(), dataStore, this)
        val appStore = spyk(
            AppStore(
                AppState(
                    recommendationState = ContentRecommendationsState(
                        pocketStoriesCategories = listOf(categ1, categ2),
                    ),
                ),
                listOf(pocketMiddleware),
            ),
        )

        appStore.dispatch(ContentRecommendationsAction.DeselectPocketStoriesCategory(categ2.name)).joinBlocking()

        // Seems like the most we can test is that an update was made.
        coVerify { dataStore.updateData(any()) }
    }

    @Test
    @Suppress("UNCHECKED_CAST")
    fun `WHEN persistCategories is called THEN update dataStore`() = runTestOnMain {
        val dataStore: DataStore<SelectedPocketStoriesCategories> =
            mockk<FakeDataStore<SelectedPocketStoriesCategories>>(relaxed = true) as
                DataStore<SelectedPocketStoriesCategories>

        persistSelectedCategories(this, listOf(mockk(relaxed = true)), dataStore)

        // Seems like the most we can test is that an update was made.
        coVerify { dataStore.updateData(any()) }
    }

    @Test
    @Suppress("UNCHECKED_CAST")
    fun `WHEN restoreSelectedCategories is called THEN dispatch PocketStoriesCategoriesSelectionsChange with data read from the persistence layer`() = runTestOnMain {
        val persistedSelectedCategory: SelectedPocketStoriesCategory = mockk {
            every { name } returns "testCategory"
            every { selectionTimestamp } returns 123
        }
        val persistedSelectedCategories: SelectedPocketStoriesCategories = mockk {
            every { valuesList } returns mutableListOf(persistedSelectedCategory)
        }
        val dataStore: DataStore<SelectedPocketStoriesCategories> =
            mockk<FakeDataStore<SelectedPocketStoriesCategories>>(relaxed = true) {
                every { data } returns flowOf(persistedSelectedCategories)
            } as DataStore<SelectedPocketStoriesCategories>
        val currentCategories = listOf(mockk<PocketRecommendedStoriesCategory>())
        val appStore = spyk(
            AppStore(AppState()),
        )

        restoreSelectedCategories(
            coroutineScope = this,
            currentCategories = currentCategories,
            store = appStore,
            selectedPocketCategoriesDataStore = dataStore,
        )

        coVerify {
            appStore.dispatch(
                ContentRecommendationsAction.PocketStoriesCategoriesSelectionsChange(
                    storiesCategories = currentCategories,
                    categoriesSelected = listOf(
                        PocketRecommendedStoriesSelectedCategory("testCategory", 123),
                    ),
                ),
            )
        }
    }
}

/**
 * Incomplete fake of a [DataStore].
 * Respects the [DataStore] contract with basic method implementations but needs to have mocked behavior
 * for more complex interactions.
 * Can be used as a replacement for mocks of the [DataStore] interface which might fail intermittently.
 */
private class FakeDataStore<T> : DataStore<T?> {
    override val data: Flow<T?>
        get() = flow { }

    override suspend fun updateData(transform: suspend (t: T?) -> T?): T? {
        return transform(null)
    }
}
