#include <iostream> 

void print_item(const int& ref) {
    std::cout << ref << '\n'; // obviously we can't modify the variable if it is a const ref 
}

#define is_small(T) (sizeof(T) <= 2 * sizeof(void*)) // A marco to see if it is cheap to copy
int main() {
    /*
        ----------------------------------------------------------
        Making a parameter a const reference is best practice as it accepts all sorts references such as non const, const, etc. 

        add_one(const int& ref) for example can accept
        - modifiable lvalue
        - non-modifiable lvalue
        - rvalues like 5 

        Best practice is to use pass by value for inexpensive copies, such as trivial primitive types
        ----------------------------------------------------------
    */
    int x = 5;
    print_item(x); // ok: x is a modifiable lvalue
    const int z = 5;
    print_item(z); // ok: z is a non-modifiable lvalue
    print_item(5); // ok: 5 is a literal rvalue

    return 0;
}