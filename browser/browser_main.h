// Copyright (c) 2015 University of Szeged.
// Copyright (c) 2015 The Chromium Authors.
// All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MINI_BROWSER_BROWSER_BROWSER_MAIN_H_
#define MINI_BROWSER_BROWSER_BROWSER_MAIN_H_

#include "base/memory/scoped_ptr.h"

namespace content {
class BrowserMainRunner;
struct MainFunctionParams;
}

int BrowserMain(
    const content::MainFunctionParams& parameters,
    const scoped_ptr<content::BrowserMainRunner>& main_runner);

#endif  // MINI_BROWSER_BROWSER_BROWSER_MAIN_H_