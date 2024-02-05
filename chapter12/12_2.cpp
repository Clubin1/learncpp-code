#include <iostream>

// Lvalue is an expression that evaluates to an identifiable object or function
// r value is an expression that evaluate to a value

// we can take the & operator of something to determine if it is an l value

int foo() {
    return 5;
}

int main () {
    int x = 5; // rvalue
    int y = x; // x is an lvalue since it evaluates to x 

    &x; 
    //&foo doesnt compile
    //&5 doesnt compile
}