#include <cstdint>
#include <iostream>

int main() {
    std::int8_t i8 = 127;
    std::uint16_t ui16 = 65535;
    const std::size_t arraySize = 10;
    
    std::cout << "i8: " << static_cast<int>(i8) << std::endl;
    std::cout << "ui16: " << ui16 << std::endl;
    return 0;
}