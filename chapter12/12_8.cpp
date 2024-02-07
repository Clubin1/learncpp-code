#include <iostream> 

int main() {
    /*
        ----------------------------------------------------------
        pointers can and should only be nonnull or null
        prefer references over pointers due to having to always check for
        dangling pointers
        ----------------------------------------------------------
    */
    int* pointer = nullptr;
    // std::cout << *pointer << '\n'; // Dereference the null pointer, causes crash
    if (pointer == nullptr) {
        std::cout << "Pointer is null...";
    } else {
        std::cout << "Pointer is not null!";
    }
    return 0;
}