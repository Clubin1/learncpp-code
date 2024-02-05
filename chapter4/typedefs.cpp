#include <iostream>
#include <string>
#include <vector>
#include <utility>

using VectPairSI = std::vector<std::pair<std::string, int> >;
using TestGrade = int;

// aliases can be used for documentation purposes. It indicates what grade_test() returns.
// comments will suffice, however if there are multiple functions that could benefit from a alias, then making one is an option
TestGrade grade_test() {
    return 1;
}

bool has_duplicates(VectPairSI pair_list) {
    return false;
}

int main() {
    // can also import type aliases
    using Balls = int;
    Balls i = 1;
    return 0;
}