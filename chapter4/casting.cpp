#include <iostream>

void print_double(double d) {
    std::cout << d << '\n';
}

void print_int(int x) {
    std::cout << x << '\n';
}

int main() {
    
    print_double(5.0);
    print_double(5.0f);

    short s = 3;
    print_int(s);
    print_int('a');
    print_int(true);

    double d = 2.2;
    
    print_int(static_cast<int>(d));
    return 0;
}