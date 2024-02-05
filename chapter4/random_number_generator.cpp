#include <iostream>
#include <random>

int plus_one() {
    static int state = 0;
    ++state;
    return state;
}
int main() {

    std::cout << plus_one() << '\n';
    std::cout << plus_one() << '\n';
    std::cout << plus_one() << '\n';
    std::cout << plus_one() << '\n';

    std::mt19937 mt;
    for (int i = 1; i <= 40; ++i) {
        std::cout << mt() << '\t';

        if (i % 5 == 0) {
            std::cout << '\n';
        }
    }
    return 0;
}