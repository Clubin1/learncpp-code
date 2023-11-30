#include <iostream>

// As if CPP rule allows compiler to change the programs obeservable behavior
int get_number() {
    std::cout << "Enter a number: ";
    int userInput;
    std::cin >> userInput;
    return userInput;
}

int main() {
    // runtime constant is a const not known at runtime, an example is a variable fetched 
    // from a user
    const int user_number = get_number();

    const int compile_time_constant1 = 3;
    const int compile_time_constant2 = 4;
    const int result_compile_time = compile_time_constant1 + compile_time_constant2;

    // this line gets changed to 7 due optimizations
    // as if rule would change this code to just be the std::cout 7 
    std::cout << compile_time_constant1 + compile_time_constant2;

    return 0;   
}