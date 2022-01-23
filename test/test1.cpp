#include "shapestuff.hpp"
#include "catch.hpp"
#include "main.hpp"

#include <iostream>

constexpr double PI = 3.14159265358979323846;

TEST_CASE("Shape class testing", "[shapestuff]") {

    auto square = shape::Square(5);
    auto circle = shape::Circle(7);

    SECTION("square scale") {
        auto prev_length = square.get_length();
        auto prev_area = square.get_area();

        double factor = 4;
        square.scale(factor);

        REQUIRE(square.get_length() == factor * prev_length);
        REQUIRE(square.get_area() == factor * factor * prev_area);
    }

    SECTION("circle scale") {
        auto prev_radius = circle.get_radius();
        auto prev_area = circle.get_area();

        double factor = 7;
        circle.scale(factor);

        REQUIRE(circle.get_radius() == factor * prev_radius);
        REQUIRE(circle.get_area() == factor * factor * prev_area);
    }

    SECTION("area") {
        REQUIRE(square.get_area() == 25);
        REQUIRE(circle.get_area() == PI * 49);
    }
}
