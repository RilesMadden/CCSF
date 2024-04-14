// main.cpp

#include <iostream>
#include <cstring>
#include "Rectangle.h"
using namespace std;


int main() {
    // instantiate house array
    Rectangle house[] = {
        Rectangle(10, 12, "Kitchen"),
        Rectangle(20, 20, "Bedroom"),
        Rectangle(8, 12, "Offce")
    };

    // fix the name of "Offce" to "Office"
    house[2].setName("Office");

    // Calculate and print area of each room
    double largestArea = 0;
    int largestAreaIndex = 0;
    for (int i = 0; i < 3; i++) {
        double l = house[i].getLength();
        double w = house[i].getWidth();
        double area = l * w;
        cout << "Room: " << endl;
        house[i].printName();
        cout << "Area: " << area << endl;

        // check if largest area
        if (area > largestArea) {
            largestArea = area;
            largestAreaIndex = i;
        }
    }

    // print largest room
    cout << "The largest room is:" << endl;
    house[largestAreaIndex].printName();

    return 0;
}

/*
Sample Output:
Room: 
Kitchen
Area: 120
Room:
Bedroom
Area: 400
Room:
Office
Area: 96
The largest room is:
Bedroom
*/