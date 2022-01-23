#include "shapestuff.hpp"
#include "vecstuff.hpp"

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv) {

    int a = 0;
    double b = 0, c = 0;

    if (argc > 1) {
        a = std::stol(argv[1]);
    }
    if (argc > 2) {
        b = std::stod(argv[2]);
    }
    if (argc > 3) {
        c = std::stod(argv[3]);
    }

    // vecstuff

    auto vec = std::vector<int>{1, 2, 3, 4, 5, 4, 3, 2, 1};

    myvec::print_vec(vec);
    std::cout << "Counts of " << a << ": " << myvec::count_vec(vec, a) << std::endl;

    myvec::add_elements(vec, a, 5);

    myvec::print_vec(vec);
    std::cout << "Counts of " << a << ": " << myvec::count_vec(vec, a) << std::endl;

    std::cout << std::endl;

    // shapestuff

    auto square = shape::Square(b);
    auto circle = shape::Circle(c);
    shape::Shape* ptr;

    std::cout << "Area of square with side length " << b << ": " << square.get_area() << std::endl;
    std::cout << "Area of circle with radius " << c << ": " << circle.get_area() << std::endl;

    std::cout << std::endl;
    
    /*square.print_message();
    ptr = &square;
    ptr->print_message();

    circle.print_message();
    ptr = &circle;
    ptr->print_message();*/

    return 0;
}
