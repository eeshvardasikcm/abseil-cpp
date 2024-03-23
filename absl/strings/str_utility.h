//
// Copyright 2024 Erik Douglas Ward (Eeshvar Das, EeshvarDasIKCM)
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef P012_STR_UTILITY_H
#define P012_STR_UTILITY_H
#include <cstdint>
#include <cassert>
struct str_utility {
private:
    static std::uint64_t modArg1;
    static int modArg2;
    static bool replace1Arg1;
    static bool privateModArg1Assigned;
    static bool privateModArg2Assigned;
    static bool privateReplace1Arg1Assigned;
    static bool privateMembersAssigned() {
        return (privateModArg1Assigned && privateModArg2Assigned && privateReplace1Arg1Assigned);
    };
    static void assertion(char c) {
        assert('0' + (modArg1 % modArg2) == c);
        assert('0' + replace1Arg1 == c);
        assert('0' + (modArg1 % 10) == c);
    }
protected:
    static void setModArg1(std::uint64_t a) {
        modArg1 = a;
        privateModArg1Assigned = true;
    }
    static void setModArg2(int b) {
        modArg1 = b;
        privateModArg2Assigned = true;
    }
    static void setReplace1Arg1(int i) {
        replace1Arg1 = i;
        privateReplace1Arg1Assigned = true;
    }
public:
    static int mod(std::uint64_t a, int b) {
        setModArg1(a);
        setModArg2(b);
        int a2 = int(a);
        int _mod_return = a2 % b;
        return _mod_return;
    };
    static char const char_0{'0'};
    static char replace_char_0_with_latter_char(int howMuchLatter) {
        setReplace1Arg1(howMuchLatter);
        assert(howMuchLatter<80);
        assert(char_0<91-howMuchLatter);
        char c_return = char_0;
        for (int i=0; i<howMuchLatter; i++){c_return++;}
        if (privateMembersAssigned()) {
            assertion(c_return);
        }
        return c_return;
    };
};
bool str_utility::privateModArg1Assigned = false;
bool str_utility::privateModArg2Assigned = false;
bool str_utility::privateReplace1Arg1Assigned = false;

#endif //P012_STR_UTILITY_H