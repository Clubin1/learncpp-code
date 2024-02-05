#include <iostream>
const int get_val() {
    return 5;
}
const std::string& get_string() {
    std::string& x = "x";
    return x;
}
const std::string* thing() {
    std::string* hi = &"ss";
}
int main() {
    const auto x = get_val();
    auto& y = get_string();
    auto& b = get_string(); 
    const int test; // top level const
    const int* ptr; // low level const
    return 0;
}