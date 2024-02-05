#include <iostream>

const std::string& get_program_name() {
    static const std::string s_program_name = "Calculator";
    return s_program_name;
}

void get_sin_cos(double degrees, double& sin_out, double& cos_out) {
    constexpr double pi = 3.14159265358979323846;
    double radians = degrees * pi / 180.0;
    sin_out = std::sin(radians);
    cos_out = std::cos(radians);
}

int main() {
    const std::string& test1 = get_program_name();
    const std::string& test2 = get_program_name();

    std::cout << &test1 << '\n';
    std::cout << &test2 << '\n';
    double sin = 0.0;
    double cos = 0.0;

    double degrees;
    std::cout << "Enter the number of degrees: ";
    std::cin >> degrees;

    get_sin_cos(degrees, sin, cos);
    
    return 0;
}