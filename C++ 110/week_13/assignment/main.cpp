// main.cpp
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

/*
Output:
IntCollection c:
1
2
3
4
5
6
IntCollection d:
1
2
3
7
IntCollection e:
1
2
3
8
9
*/

/*
Error when adding c.addCapacity():
main.cpp: In function 'int main()':
main.cpp:38:18: error: 'void IntCollection::addCapacity()' is private within this context
   38 |     c.addCapacity();
*/
