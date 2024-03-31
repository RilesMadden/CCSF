// Week 10 Assignment
// Circle Class
// Riley Madden, 110b Spring 2024

#include <iostream>
#include "Circle.h"
using namespace std;

int main() {

    cout << "1. Create a local circle object and set its x, y, and radius. Verify that its area is calculated correctly." << endl;
    // create new circle
    Circle myCircle;
    myCircle.setX(2);
    myCircle.setY(4);
    myCircle.setRadius(8);

    // calculate area
    cout << "Area of a circle at point (" << myCircle.getX() << "," << myCircle.getY() << ") with radius " << myCircle.getRadius() << ":" << endl;
    cout << myCircle.getArea() << endl;
    cout << endl;

    cout << "2a. Create a circle pointer, and point it at your local circle object.  Use this pointer to set its x, y, and radius values to new values. Using your pointer, verify that your containsPoint() function works by trying a point which is in fact in your circle, and showing it returns true." << endl;

    // create new circle and test points
    Circle *circlePtr = new Circle();
    circlePtr->setX(5);
    circlePtr->setY(6);
    circlePtr->setRadius(8);
    double testX = 6;
    double testY = 8;

    // check if point is contained within circle
    cout << "Let's check if point (" << testX << "," << testY << ") is contained within a circle at point (" << circlePtr->getX() << "," << circlePtr->getY() << ") with radius " << circlePtr->getRadius() << ":" << endl;
    if (circlePtr->containsPoint(testX,testY)) {
        cout << "The point is contained within the circle." << endl;
    }
    else {
        cout << "The point is not contained within the circle." << endl;
    }
    cout << endl;

    cout << "2b. Try a different point which is not in your circle and show it returns false." << endl;
    // set new test point
    testX = 14;
    testY = 20;

    // check if point is contained within circle
    cout << "Let's check if point (" << testX << "," << testY << ") is contained within a circle at point (" << circlePtr->getX() << "," << circlePtr->getY() << ") with radius " << circlePtr->getRadius() << ":" << endl;
    if (circlePtr->containsPoint(testX,testY)) {
        cout << "The point is contained within the circle." << endl;
    }
    else {
        cout << "The point is not contained within the circle." << endl;
    }

    // delete dynamic pointer and end
    delete circlePtr;
    return 0;
}

/*
Output:
1. Create a local circle object and set its x, y, and radius. Verify that its area is calculated correctly.
Area of a circle at point (2,4) with radius 8:
201.062

2a. Create a circle pointer, and point it at your local circle object.  Use this pointer to set its x, y, and radius values to new values. Using your pointer, verify that your containsPoint() function works by trying a point which is in 
fact in your circle, and showing it returns true.
Let's check if point (6,8) is contained within a circle at point (5,6) with radius 8:
The point is contained within the circle.

2b. Try a different point which is not in your circle and show it returns false.
Let's check if point (14,20) is contained within a circle at point (5,6) with radius 8:
The point is not contained within the circle.
*/