// Rectangle class file
// Rectangle.cpp

#include <iostream>
#include <cstring>
#include "Rectangle.h"
using namespace std;

// constructors
Rectangle::Rectangle() {
    width = 0;
    length = 0;
    name = new char[128];
}

Rectangle::Rectangle(double w, double l, const char* n) {
    width = w;
    length = l;
    name = new char[128];
    strcpy(name, n);
}
 
// functions

void Rectangle::initName(char* n) {
    name = new char[128];
    strcpy(name, n);
}

void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setLength(double l) {
    length = l;
}

void Rectangle::setName(const char* n) {
    name = new char[128];
    strcpy(name, n);    
}

void Rectangle::setWidth(char *w) {
    double myWidth = atof(w);
    if (myWidth > 0) {
        width = myWidth;
    }
    else {
        cout << "Invalid width!" << endl;
        exit(1);
    }
}

void Rectangle::setLength(char *l) {
    double myLength = atof(l);
    if (myLength > 0) {
        length = myLength;
    }
    else {
        cout << "Invalid length!" << endl;
        exit(1);
    }
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

void Rectangle::printName() const {
    cout << name << endl;
}

// destructor
Rectangle::~Rectangle() {
    delete [] name;
    name = NULL;
}