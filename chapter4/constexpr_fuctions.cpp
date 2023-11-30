#include <iostream> 

constexpr int greater(int x, int y) {
    return (x > y ? x : y);
}

// consteval int greater() can be used to enforce something is ran at compile time
// if the result of consteval is not it errors out

int main() {

    constexpr int x = 5;
    constexpr int y = 6;
    constexpr int g = greater(x, y);
    std::cout << g << " is greater!\n"; // this is evaluated at runtime
    return 0;
}