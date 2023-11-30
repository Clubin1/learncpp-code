#include <iostream> 
// constexpr is used when our consts are not known to be either compile time or runtime, and we 
// strictly want to enforce a const to be compile time
int main() {
    
    constexpr double gravity = 9.8;
    constexpr int sum = 9;

    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;

    return 0;
}