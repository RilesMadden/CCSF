// Rectangle program file - RectangleProgram.cpp

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    // create pointer for rectangle class and set length / width
    Rectangle* rectPtr = new Rectangle();
    
    rectPtr->setLength(30);
    rectPtr->setWidth(10);

    cout << "Here are some stats for a rectangle of length " << rectPtr->getLength() << " and width " << rectPtr->getWidth() << ":" << endl;
    cout << "Area: " << rectPtr->getArea() << endl;
    cout << "Perimeter: " << rectPtr->getPerimeter() << endl;
    
    if (rectPtr->isSquare()) {
        cout << "This rectangle is a square!" << endl;
    }
    else {
        cout << "This rectangle is not a square!" << endl;
    }

    delete rectPtr;
    return 0;
}

/*
Sample Output:
Here are some stats for a rectangle of length 30 and width 10:
Area: 300
Perimeter: 80
This rectangle is not a square!
*/
