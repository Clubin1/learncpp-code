#include <iostream>

void overflow() {
    int x = 2147483647;
    std::cout << x << '\n';
    ++x;
    std::cout << x << '\n';
}

int main() {
    short ss; // -128 - 127 bits
    int si; // -32,768 - 32,767 bits
    long sl; // -2,147,483,648 to 2,147,483,647 bits
    long long ssl; // -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

    int x = 10;
    int y = 3;

    std::cout << "x divided by y is " << x / y << '\n';
    overflow();
    return 0; 
}