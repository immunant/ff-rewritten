// |reftest| shell-option(--enable-temporal) skip-if(!this.hasOwnProperty('Temporal')||!xulRuntime.shell) -- Temporal is not enabled unconditionally, requires shell-options
// Copyright (C) 2022 Igalia, S.L. All rights reserved.
// This code is governed by the BSD license found in the LICENSE file.

/*---
esid: sec-temporal.zoneddatetime.prototype-@@tostringtag
description: The @@toStringTag property of Temporal.ZonedDateTime
includes: [propertyHelper.js]
features: [Temporal]
---*/

verifyProperty(Temporal.ZonedDateTime.prototype, Symbol.toStringTag, {
  value: "Temporal.ZonedDateTime",
  writable: false,
  enumerable: false,
  configurable: true,
});

reportCompare(0, 0);
