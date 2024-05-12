// main.cpp
// Week 15 Assignment - IntCollection with Vectors
// Riley Madden, 110b Spring 2024
#include <iostream>
#include "IntCollection.h"

using namespace std;

int main() {
    IntCollection c, d, e;

    c << 1 << 2 << 3; // Multiple insertions on the same line

    d = e = c; // Multiple assignments on the same line

    c << 4 << 5 << 6;

    d << 7;

    e << 8 << 9;

    cout << "IntCollection c:" << endl;
    for (int i = 0; i < c.getSize(); i++) {
        cout << c.get(i) << endl;
    }

    cout << "IntCollection d:" << endl;
    for (int i = 0; i < d.getSize(); i++) {
        cout << d.get(i) << endl;
    }

    cout << "IntCollection e:" << endl;
    for (int i = 0; i < e.getSize(); i++) {
        cout << e.get(i) << endl;
    }

    return 0;
}