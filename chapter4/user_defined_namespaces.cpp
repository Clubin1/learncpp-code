#include <iostream>
#include "foo.h"
#include "goo.h"

int main() {
    std::cout << Foo::do_something(4,3) << '\n';
    std::cout << Goo::do_something(4,3) << '\n';
    return 0;
}