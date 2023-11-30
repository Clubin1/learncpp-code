#include <iostream> 

// literals are values inserted directly into code. We can use suffixes if the literal isnt the type we want

int main() {
    std::cout << 5 << '\n';
    std::cout << 5L << '\n';
    
    std::cout << 5.0 << '\n';  // 5.0 (no suffix) is type double (by default)
    std::cout << 5.0f << '\n'; // 5.0f is type float

    return 0;
}