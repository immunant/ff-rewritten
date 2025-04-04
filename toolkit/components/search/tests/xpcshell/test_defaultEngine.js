/* Any copyright is dedicated to the Public Domain.
 * http://creativecommons.org/publicdomain/zero/1.0/ */

/*
 * Test that defaultEngine property can be set and yields the proper events and\
 * behavior (search results)
 */

"use strict";

let engine1;
let engine2;

add_setup(async () => {
  do_get_profile();
  Services.fog.initializeFOG();

  useHttpServer();

  await Services.search.init();

  engine1 = await SearchTestUtils.installOpenSearchEngine({
    url: `${gHttpURL}/opensearch/generic1.xml`,
  });
  engine2 = await SearchTestUtils.installOpenSearchEngine({
    url: `${gHttpURL}/opensearch/generic2.xml`,
  });
});

function promiseDefaultNotification() {
  return SearchTestUtils.promiseSearchNotification(
    SearchUtils.MODIFIED_TYPE.DEFAULT,
    SearchUtils.TOPIC_ENGINE_MODIFIED
  );
}

add_task(async function test_defaultEngine() {
  let promise = promiseDefaultNotification();
  Services.search.defaultEngine = engine1;
  Assert.equal((await promise).wrappedJSObject, engine1);
  Assert.equal(Services.search.defaultEngine.wrappedJSObject, engine1);

  await assertGleanDefaultEngine({
    normal: {
      engineId: "other-Test search engine",
      displayName: "Test search engine",
      loadPath: "[http]localhost/test-search-engine.xml",
      submissionUrl: "https://www.google.com/search?q=",
    },
  });

  promise = promiseDefaultNotification();
  Services.search.defaultEngine = engine2;
  Assert.equal((await promise).wrappedJSObject, engine2);
  Assert.equal(Services.search.defaultEngine.wrappedJSObject, engine2);

  await assertGleanDefaultEngine({
    normal: {
      engineId: "other-A second test engine",
      displayName: "A second test engine",
      loadPath: "[http]localhost/a-second-test-engine.xml",
      submissionUrl: "https://duckduckgo.com/?q=",
    },
  });

  promise = promiseDefaultNotification();
  Services.search.defaultEngine = engine1;
  Assert.equal((await promise).wrappedJSObject, engine1);
  Assert.equal(Services.search.defaultEngine.wrappedJSObject, engine1);

  await assertGleanDefaultEngine({
    normal: {
      engineId: "other-Test search engine",
      displayName: "Test search engine",
      loadPath: "[http]localhost/test-search-engine.xml",
      submissionUrl: "https://www.google.com/search?q=",
    },
  });
});

add_task(async function test_telemetry_empty_submission_url() {
  await SearchTestUtils.installOpenSearchEngine({
    url: `${gHttpURL}/opensearch/simple.xml`,
    setAsDefaultPrivate: true,
  });

  await assertGleanDefaultEngine({
    normal: {
      engineId: "other-simple",
      displayName: "simple",
      loadPath: "[http]localhost/simple.xml",
      submissionUrl: "blank:",
    },
    private: {
      engineId: "",
      displayName: "",
      loadPath: "",
      submissionUrl: "blank:",
    },
  });
});

add_task(async function test_switch_with_invalid_overriddenBy() {
  engine1.wrappedJSObject.setAttr("overriddenBy", "random@id");

  consoleAllowList.push(
    "Test search engine had overriddenBy set, but no _overriddenData"
  );

  let promise = promiseDefaultNotification();
  Services.search.defaultEngine = engine2;
  Assert.equal((await promise).wrappedJSObject, engine2);
  Assert.equal(Services.search.defaultEngine.wrappedJSObject, engine2);
});
