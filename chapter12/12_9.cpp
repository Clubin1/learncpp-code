#include <iostream>

int main() {
    /*
        ----------------------------------------------------------
        pointers can point to const vars and also be const them selves
        we can have,
        const pointer to non const var (the pointer itself is immutable but the value it points to isnt)
        non const pointer to const var (the pointer is mutable but not the var)
        const pointer const var (both immutable)
        ----------------------------------------------------------
    */
    const int x = 5;
    int nonconstx = 5;
    const int* ptr = &x; // this is a mutable pointer pointing to an immutable value

    const int y = 6;
    ptr = &y;


    int* const ptr2 = &nonconstx; // this is an immutable pointer
    return 0;
}