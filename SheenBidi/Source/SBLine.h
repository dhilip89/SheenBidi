/*
 * Copyright (C) 2014 Muhammad Tayyab Akram
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _SB_INTERNAL_LINE_H
#define _SB_INTERNAL_LINE_H

#include <SBConfig.h>
#include <SBTypes.h>
#include <SBLine.h>

struct _SBRun;
typedef struct _SBRun SBRun;
typedef SBRun *SBRunRef;

struct _SBRun {
    SBUInteger offset;
    SBUInteger length;
    SBLevel level;
};

struct _SBLine {
    SBUInteger _retainCount;

    SBRun *fixedRuns;
    SBUInteger runCount;
    SBUInteger offset;
    SBUInteger length;
};

#endif