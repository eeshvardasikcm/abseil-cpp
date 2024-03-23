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
struct str_utility {
    static char mod(unsigned long long a, int b) {};
    static char const char_0{'0'};
    static char replace_char_0_with_latter_char(int howMuchLatter) {
        assert(howMuchLatter<80);
        assert(char_0<91-howMuchLatter);
        char c_return = char_0;
        for (int i=0; i<howMuchLatter; i++){c_return++;}
    };
};
#endif //P012_STR_UTILITY_H
