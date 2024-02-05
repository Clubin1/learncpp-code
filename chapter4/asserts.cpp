#include <cassert>
#include <cmath>
#include <iostream>

double calculate_time_until_object_hits_ground(double initial_height, double gravity) {
    assert(gravity > 0.0 && "Gravity can not be less then 0"); // combine bool with logical && and string to add message
    if (initial_height <= 0.0) {
        return 0.0; 
    }
    return std::sqrt((2.0 * initial_height) / gravity);
}

int main() {
    calculate_time_until_object_hits_ground(1.0, -1.0);
    // used to compare stuff like types, constants and expressions at compile time
    static_assert(sizeof(long) == 8, "long must be 8 bytes long");
    static_assert(sizeof(int) >= 4, "int must be at least 4 bytes long");
}