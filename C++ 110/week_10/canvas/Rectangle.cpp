// Rectangle class file Rectangle.cpp

#include <iostream>
#include "Rectangle.h"
using namespace std;

// set the width of the rectangle
void Rectangle::setWidth(double w) {
    width = w;
}

// set the length of the rectangle
void Rectangle::setLength(double l) {
    length = l;
}

// get the area of the rectangle
double Rectangle::getArea() const {
    return width * length;
}

// get the perimeter of the rectangle
double Rectangle::getPerimeter() const {
    return (2* width + 2*length);
}

// determine if rectangle is a square
bool Rectangle::isSquare() const {
    return width == length;
}
