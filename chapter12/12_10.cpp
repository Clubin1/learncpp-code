#include <iostream>

void pass_by_address(const std::string* ptr) {
    if (ptr == nullptr) {
        std::cout << "nullpointer, aborting..";
        return;
    }
    std::cout << *ptr << '\n';
}

void increment_x(int* ptr) {
    if (ptr == nullptr) {
        std::cout << "nullpointer, aborting..";
        return;
    }
    *ptr = 10;
}

int main() {
    std::string x = "Justin Tubay";
    int x_int = 5;
    pass_by_address(&x);
    increment_x(&x_int);
    std::cout << x_int << '\n';
    return 0;
}