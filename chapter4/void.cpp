#include <iostream>

void write_value() {
    std::cout << "Writting random text blah" << '\n';
}

void write_param(int x) {
    std::cout << "The value of x is: " << x << '\n';
}

int main() {
    int x = 2;
    write_value();
    std::cout << "Hello World" << '\n';
    write_param(x);
}
