#include <iostream>


int main() {
    /*
        ----------------------------------------------------------
        & operation is used to take address of something
        * is used to dereference an memory address

        a pointer is essentially storing the location of memory
        int pointer = &thing;

        if we want to read pointer we have to dereference using &
        print(*pointer)

        pointers should be stored to a value, doesn't have to but leads to undefined behavior if not
        same types should be used. ex cant make int pointer point to double variable

        if we modify the pointers value we modify what the pointer is pointing to. if we modify the dereferenced pointer we 
        modify the pointed to value

        dangling pointers - pointers that point to a value that has been destroyed already

        var x = 5;
        pointer = &5;
        {
            var y = 6
            pointer = &y
        }
        print(pointer) // y has been destroyed, dangling pointer
        ----------------------------------------------------------
    */
    int x = 5;
    std::cout << &x << '\n';
    std::cout << *(&x) << '\n';

    int y = 10;
    int* ptr = &y;
    std::cout << *ptr << '\n';
}