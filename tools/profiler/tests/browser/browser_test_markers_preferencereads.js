/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

requestLongerTimeout(10);

const kContentPref = "font.size.variable.x-western";

function countPrefReadsInThread(pref, thread) {
  let count = 0;
  for (let payload of ProfilerTestUtils.getPayloadsOfType(
    thread,
    "Preference"
  )) {
    if (payload.prefName === pref) {
      count++;
    }
  }
  return count;
}

async function waitForPaintAfterLoad() {
  return SpecialPowers.spawn(gBrowser.selectedBrowser, [], () => {
    return new Promise(function (resolve) {
      function listener() {
        if (content.document.readyState == "complete") {
          content.requestAnimationFrame(() => content.setTimeout(resolve, 0));
        }
      }
      if (content.document.readyState != "complete") {
        content.document.addEventListener("readystatechange", listener);
      } else {
        listener();
      }
    });
  });
}

/**
 * Test the Preference Read markers.
 */
add_task(async function test_profile_preferencereads_markers() {
  Assert.ok(
    !Services.profiler.IsActive(),
    "The profiler is not currently active"
  );

  await ProfilerTestUtils.startProfiler({ features: ["js"] });

  const url = BASE_URL + "single_frame.html";
  await BrowserTestUtils.withNewTab(url, async contentBrowser => {
    const contentPid = await SpecialPowers.spawn(
      contentBrowser,
      [],
      () => Services.appinfo.processID
    );

    await waitForPaintAfterLoad();

    // Ensure we read a pref in the content process.
    await SpecialPowers.spawn(contentBrowser, [kContentPref], pref => {
      Services.prefs.getIntPref(pref);
    });

    // Check that some Preference Read profile markers were generated.
    {
      const { contentThread } = await stopProfilerNowAndGetThreads(contentPid);

      Assert.greater(
        countPrefReadsInThread(kContentPref, contentThread),
        0,
        `Preference Read profile markers for ${kContentPref} were recorded.`
      );
    }
  });
});
