#include <iostream>
#include <string_view>

void greet(std::string_view* name=nullptr) {
    if(name == nullptr) {
        std::cout << "hello __";
    } else {
        std::cout << "hello " << *name << '\n';
    }
}

int main() {
    /*
        ----------------------------------------------------------
        addresses can be used to create optional parameters in functions 
        that accept address as a parameter.

        for example,

        void greet(string* name=nullptr) 
            if nullptr
                print hello
            else
                print *name
        
        With this we can basically call greet() without parameters and with a string
        the issue arrises with function overloading essentially doing the same thing
        with less risks as there would be no need to check for nullptr

        void greet() 
            print hello
        
        void greet(string name)
            print string
        
        this does the same thing that the pass by address greet does
        ----------------------------------------------------------
    */
    greet();
    std::string_view test = "justin";
    greet(&test);
    return 0;
}