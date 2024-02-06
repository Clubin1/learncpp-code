#include <iostream>
#include <string> 

void print_item(std::string& x) { 
    std::cout << x << '\n';
}

void increment_x(int& x) {
    ++x;
}

int main() {
    /*
        ----------------------------------------------------------
        passing by value raises issues when passing expensive to copy data types
        like arrays and strings. To avoid this we can pass by reference.

        for example

        func(x) x is a string copies x, but
        func(x&) takes a reference to x instead of copying

        Passing by reference also allows us to modify the variable 

        func(x)
            ++x;
        
        print(x) printing the variable would just print the value we passed to the function in the first place
        if we make a copy, the copy is changed not the original variable
        ----------------------------------------------------------
        An important thing to remember is that pass by reference only accepts mutable lvalues
        for example

        print(int& y)
            do_something
        
        const int& y = 10;
        print(y)

        This would not compile
        ----------------------------------------------------------
    */
    std::string x = "Hello world!";
    print_item(x);
    int y = 5;
    increment_x(y);
    std::cout << y << '\n'; // this prints 6 and not 5 
    return 0;
}