/*
 * Copyright (C) 2015 Muhammad Tayyab Akram
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

#ifndef SHEENBIDI_TESTER_CHAR_TYPE_TESTER_H
#define SHEENBIDI_TESTER_CHAR_TYPE_TESTER_H

#include <string>
#include <vector>

#include <Parser/UnicodeData.h>

namespace SheenBidi {
namespace Tester {

class CharTypeTester {
public:
    CharTypeTester(const Parser::UnicodeData &unicodeData);

    void test();

private:
    const Parser::UnicodeData &m_unicodeData;
};

}
}

#endif
