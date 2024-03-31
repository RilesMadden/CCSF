// Circle class file
#include <iostream>
#include <cmath> // needed for square root function
#include "Circle.h"
using namespace std;

void Circle::setRadius(double r) {
    radius = r;
}

void Circle::setX(double value) {
    x = value;
}

void Circle::setY(double value) {
    y = value;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getX() const {
    return x;
}

double Circle::getY() const {
    return y;
}

double Circle::getArea() const {
    return (radius * radius * 3.14159);
}

bool Circle::containsPoint(double xValue, double yValue) const {
    double distance = sqrt((xValue - x)*(xValue - x) + (yValue - y)*(yValue - y));
    return radius >= distance;
}