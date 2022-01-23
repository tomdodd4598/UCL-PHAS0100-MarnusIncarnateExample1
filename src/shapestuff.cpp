#include "shapestuff.hpp"

namespace shape {

    // Shape

    Shape::Shape() {}

    void Shape::print_message() {
        std::cout << "I am a shape!" << std::endl;
    }

    // Square

    Square::Square(double len) : Shape(), length{len} {}

    double Square::get_length() {
        return length;
    }

    void Square::scale(const double factor) {
        length *= factor;
    }

    double Square::get_area() {
        return length * length;
    }

    void Square::print_message() {
        std::cout << "I am a square!" << std::endl;
    }

    // Circle

    Circle::Circle(double rad) : Shape(), radius{rad} {}

    double Circle::get_radius() {
        return radius;
    }

    void Circle::scale(const double factor) {
        radius *= factor;
    }

    double Circle::get_area() {
        return PI * radius * radius;
    }

    void Circle::print_message() {
        std::cout << "I am a circle!" << std::endl;
    }
}