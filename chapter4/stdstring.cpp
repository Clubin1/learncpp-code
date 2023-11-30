#include <iostream>
#include <string>

int main() {
    std::string name = "Justin";
    int name_length = static_cast<int>(name.length());

    std::cout << name << name_length;
}