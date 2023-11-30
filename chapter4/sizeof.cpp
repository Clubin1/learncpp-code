#include <iostream>

int main() {
    bool is_graduated = false;
    int age = 20;
    char gender = 'M';
    
    std::cout << "is_graduated is " << sizeof(is_graduated) << " bytes\n";
    std::cout << "age is " << sizeof(age) << " bytes\n";
    std::cout << "gender is " << sizeof(gender) << " bytes\n";

    return 0;
}