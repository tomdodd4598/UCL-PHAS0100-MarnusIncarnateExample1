#ifndef SHAPESTUFF_H
#define SHAPESTUFF_H

#include <iostream>

namespace shape {

    constexpr double PI = 3.14159265358979323846;

    class Shape {
    public:
        Shape();

        virtual void scale(const double factor) = 0;

        virtual double get_area() = 0;

        virtual void print_message();
    };

    class Square : public Shape {
    public:
        Square(double len);

        double get_length();

        virtual void scale(const double factor);
        
        virtual double get_area();

        virtual void print_message();
    
    private:
        double length;
    };

    class Circle : public Shape {
    public:
        Circle(double rad);

        double get_radius();

        virtual void scale(const double factor);
        
        virtual double get_area();

        virtual void print_message();
    
    private:
        double radius;
    };
}

#endif
