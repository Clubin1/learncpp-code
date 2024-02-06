#include <iostream>
int main() {
        /*
        ----------------------------------------------------------
        Since we cannot make a reference to a const we can get around 
        this by making the reference itself constant.

        ex

        const int x = 5;
        const int& ref = x;

        That code will compile as we have a immutable reference now to an immutable var

        ----------------------------------------------------------
    */
    const int x = 5;
    const int& x_ref = x;

    std::cout << x << x_ref << '\n';
    return 0;
}