#include <iostream>

int main () {
    /*
        ----------------------------------------------------------
        lvalue reference types
        int     a int type
        int&    a reference to an int object
        double& a reference to a double object
        ----------------------------------------------------------
        A common thing to do is create an alias/ref variable using
        type& ref = var;
        ----------------------------------------------------------
        we can also modify values through lvalue reference
        type var = 5;
        type& ref = var;
        ref = 10;
        cout << var << ref;
        ----------------------------------------------------------
        - Things to note
        - All references must be initialized when created. We cannot have a reference that 
        refers to nothing. The process of a reference being attached to something is called binding
        - References have to be bound to a modifiable value. We cannot have a variable that refers a const variable
        - References cannot be reassigned. Doing a reassignment on a reference will reassign the original reference to the value of what you are trying to reassign.
    */

    int x = 5;
    int& ref = x;

    std::cout << x << '\n';
    std::cout << ref << '\n';

    ref = 10;
    std::cout << x << '\n';
    std::cout << ref << '\n';
    return 0;
}