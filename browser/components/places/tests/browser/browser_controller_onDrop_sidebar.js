/* Any copyright is dedicated to the Public Domain.
 * http://creativecommons.org/publicdomain/zero/1.0/ */

"use strict";

const TEST_URL = "about:buildconfig";

add_setup(async function () {
  // The following initialization code is necessary to avoid a frequent
  // intermittent failure in verify-fission where, due to timings, we may or
  // may not import default bookmarks.
  info("Ensure Places init is complete");
  let placesInitCompleteObserved = TestUtils.topicObserved(
    "places-browser-init-complete"
  );
  Cc["@mozilla.org/browser/browserglue;1"]
    .getService(Ci.nsIObserver)
    .observe(null, "browser-glue-test", "places-browser-init-complete");
  await placesInitCompleteObserved;
  // Clean before and after so we don't have anything in the folders.
  await PlacesUtils.bookmarks.eraseEverything();

  registerCleanupFunction(async function () {
    await PlacesUtils.bookmarks.eraseEverything();
  });
});

// Simulating actual drag and drop is hard for a xul tree as we can't get the
// required source elements, so we have to do a lot more work by hand.
async function simulateDrop(
  selectTargets,
  sourceBm,
  dropEffect,
  targetGuid,
  isVirtualRoot = false
) {
  await withSidebarTree("bookmarks", async function (tree) {
    for (let target of selectTargets) {
      tree.selectItems([target]);
      if (tree.selectedNode instanceof Ci.nsINavHistoryContainerResultNode) {
        tree.selectedNode.containerOpen = true;
      }
    }

    let dataTransfer = {
      _data: [],
      dropEffect,
      mozCursor: "auto",
      mozItemCount: 1,
      types: [PlacesUtils.TYPE_X_MOZ_PLACE],
      mozTypesAt() {
        return [this._data[0].type];
      },
      mozGetDataAt() {
        return this._data[0].data;
      },
      mozSetDataAt(type, data, index) {
        this._data.push({
          type,
          data,
          index,
        });
      },
    };

    let event = {
      dataTransfer,
      preventDefault() {},
      stopPropagation() {},
    };

    tree._controller.setDataTransfer(event);

    Assert.equal(
      dataTransfer.mozTypesAt(0),
      PlacesUtils.TYPE_X_MOZ_PLACE,
      "Should have x-moz-place as the first data type."
    );

    let dataObject = JSON.parse(dataTransfer.mozGetDataAt(0));

    let guid = isVirtualRoot ? dataObject.concreteGuid : dataObject.itemGuid;

    Assert.equal(guid, sourceBm.guid, "Should have the correct guid.");
    Assert.equal(
      dataObject.title,
      PlacesUtils.bookmarks.getLocalizedTitle(sourceBm),
      "Should have the correct title."
    );

    Assert.equal(dataTransfer.dropEffect, dropEffect);

    let ip = new PlacesInsertionPoint({
      parentId: await PlacesTestUtils.promiseItemId(targetGuid),
      parentGuid: targetGuid,
      index: 0,
      orientation: Ci.nsITreeView.DROP_ON,
    });

    await PlacesControllerDragHelper.onDrop(ip, dataTransfer);
  });
}

add_task(async function test_move_normal_bm_in_sidebar() {
  let bm = await PlacesUtils.bookmarks.insert({
    parentGuid: PlacesUtils.bookmarks.toolbarGuid,
    title: "Fake",
    url: TEST_URL,
  });

  await simulateDrop([bm.guid], bm, "move", PlacesUtils.bookmarks.unfiledGuid);

  let newBm = await PlacesUtils.bookmarks.fetch(bm.guid);

  Assert.equal(
    newBm.parentGuid,
    PlacesUtils.bookmarks.unfiledGuid,
    "Should have moved to the new parent."
  );

  let oldLocationBm = await PlacesUtils.bookmarks.fetch({
    parentGuid: PlacesUtils.bookmarks.toolbarGuid,
    index: 0,
  });

  Assert.ok(!oldLocationBm, "Should not have a bookmark at the old location.");
});

add_task(async function test_try_move_root_in_sidebar() {
  let menuFolder = await PlacesUtils.bookmarks.fetch(
    PlacesUtils.bookmarks.menuGuid
  );
  await simulateDrop(
    [menuFolder.guid],
    menuFolder,
    "move",
    PlacesUtils.bookmarks.toolbarGuid,
    true
  );

  menuFolder = await PlacesUtils.bookmarks.fetch(
    PlacesUtils.bookmarks.menuGuid
  );

  Assert.equal(
    menuFolder.parentGuid,
    PlacesUtils.bookmarks.rootGuid,
    "Should have remained in the root"
  );

  let newFolder = await PlacesUtils.bookmarks.fetch({
    parentGuid: PlacesUtils.bookmarks.toolbarGuid,
    index: 0,
  });

  Assert.notEqual(
    newFolder.guid,
    menuFolder.guid,
    "Should have created a different folder"
  );
  Assert.equal(
    newFolder.title,
    PlacesUtils.bookmarks.getLocalizedTitle(menuFolder),
    "Should have copied the folder title."
  );
  Assert.equal(
    newFolder.type,
    PlacesUtils.bookmarks.TYPE_BOOKMARK,
    "Should have a bookmark type (for a folder shortcut)."
  );
  Assert.equal(
    newFolder.url,
    `place:parent=${PlacesUtils.bookmarks.menuGuid}`,
    "Should have the correct url for the folder shortcut."
  );
});

add_task(async function test_try_move_bm_within_two_root_folder_queries() {
  await PlacesUtils.bookmarks.eraseEverything();

  let bookmark = await PlacesUtils.bookmarks.insert({
    parentGuid: PlacesUtils.bookmarks.unfiledGuid,
    title: "Fake",
    url: TEST_URL,
  });

  let queryType = Ci.nsINavHistoryQueryOptions.QUERY_TYPE_BOOKMARKS;

  let queries = await PlacesUtils.bookmarks.insertTree({
    guid: PlacesUtils.bookmarks.toolbarGuid,
    children: [
      {
        title: "Query",
        url: `place:queryType=${queryType}&terms=Fake`,
      },
    ],
  });

  await simulateDrop(
    [queries[0].guid, bookmark.guid],
    bookmark,
    "move",
    PlacesUtils.bookmarks.toolbarGuid
  );

  let newBm = await PlacesUtils.bookmarks.fetch(bookmark.guid);

  Assert.equal(
    newBm.parentGuid,
    PlacesUtils.bookmarks.toolbarGuid,
    "should have moved the bookmark to a new folder."
  );
});

add_task(async function test_move_within_itself() {
  await PlacesUtils.bookmarks.eraseEverything();

  let bookmarks = await PlacesUtils.bookmarks.insertTree({
    guid: PlacesUtils.bookmarks.unfiledGuid,
    children: [
      {
        title: "bm1",
        url: "https://www.example.com/bookmark1.html",
      },
      {
        title: "bm2",
        url: "https://www.example.com/bookmark2.html",
      },
      {
        title: "bm3",
        url: "https://www.example.com/bookmark3.html",
      },
    ],
  });

  await withSidebarTree("bookmarks", async function (tree) {
    // Select the folder containing the bookmarks
    // and save its index position
    tree.selectItems([PlacesUtils.bookmarks.unfiledGuid]);
    let unfiledFolderIndex = tree.view.treeIndexForNode(tree.selectedNode);

    let guids = bookmarks.map(bookmark => bookmark.guid);
    tree.selectItems(guids);
    let dataTransfer = {
      _data: [],
      dropEffect: "move",
      mozCursor: "auto",
      mozItemCount: bookmarks.length,
      types: [PlacesUtils.TYPE_X_MOZ_PLACE],
      mozTypesAt() {
        return [this._data[0].type];
      },
      mozGetDataAt() {
        return this._data[0].data;
      },
      mozSetDataAt(type, data, index) {
        this._data.push({
          type,
          data,
          index,
        });
      },
    };

    bookmarks.forEach((bookmark, index) => {
      // Index positions of the newly created bookmarks
      bookmark.rowIndex = unfiledFolderIndex + index + 1;
      bookmark.node = tree.view.nodeForTreeIndex(bookmark.rowIndex);
      bookmark.cachedBookmarkIndex = bookmark.node.bookmarkIndex;
    });

    let assertBookmarksHaveNotChangedPosition = () => {
      bookmarks.forEach(bookmark => {
        Assert.equal(
          bookmark.node.bookmarkIndex,
          bookmark.cachedBookmarkIndex,
          "should not have moved the bookmark."
        );
      });
    };

    // Mimic "drag" events
    let dragStartEvent = new CustomEvent("dragstart", {
      bubbles: true,
    });
    dragStartEvent.dataTransfer = dataTransfer;

    let dragEndEvent = new CustomEvent("dragend", {
      bubbles: true,
    });

    let treeChildren = tree.view._element.children[1];

    treeChildren.dispatchEvent(dragStartEvent);
    await tree.view.drop(
      bookmarks[1].rowIndex,
      Ci.nsITreeView.DROP_ON,
      dataTransfer
    );
    treeChildren.dispatchEvent(dragEndEvent);
    assertBookmarksHaveNotChangedPosition();

    treeChildren.dispatchEvent(dragStartEvent);
    await tree.view.drop(
      bookmarks[2].rowIndex,
      Ci.nsITreeView.DROP_ON,
      dataTransfer
    );
    treeChildren.dispatchEvent(dragEndEvent);
    assertBookmarksHaveNotChangedPosition();
  });
});
