/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at <http://mozilla.org/MPL/2.0/>. */

// Test that breakpoints at worker startup are hit when using windowless workers.

"use strict";

add_task(async function () {
  const dbg = await initDebugger(
    "doc-windowless-workers-early-breakpoint.html",
    "simple-worker.js"
  );

  const workerSource = findSource(dbg, "simple-worker.js");

  await selectSource(dbg, "simple-worker.js");
  await waitForSelectedSource(dbg, "simple-worker.js");
  await addBreakpoint(dbg, workerSource, 1);
  invokeInTab("startWorker");
  await waitForPaused(dbg, "simple-worker.js");

  // We should be paused at the first line of simple-worker.js
  await assertPausedAtSourceAndLine(dbg, workerSource.id, 1);
  // We have to remove the first breakpoint, set on the first worker.
  // All the workers use the same source.
  // The first worker is loaded on the html page load.
  await removeBreakpoint(dbg, workerSource.id, 1, 13);
  await resume(dbg);

  // Make sure that suspending activity in the worker when attaching does not
  // interfere with sending messages to the worker.
  await addBreakpoint(dbg, workerSource, 10);
  invokeInTab("startWorkerWithMessage");
  await waitForPaused(dbg, "simple-worker.js");

  // We should be paused in the message listener in simple-worker.js
  await assertPausedAtSourceAndLine(dbg, workerSource.id, 10);
  await removeBreakpoint(dbg, workerSource.id, 10, 3);
});
