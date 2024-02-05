#include <iostream> 
#include <string_view>

void print_string(std::string_view str) {
    std::cout << str << '\n';
}

int main() {
    // constexpr std::string_view name = "Justin";
    std::string_view name = "Justin";
    print_string(name);
}