#include <iostream>
#include <string>

bool binarySearch(const string array[], int length, string value) {
    int first = 0, // first array element
        last = length - 1, // last array element
        middle, // midpoint of search
        position = -1; // position of search value
    bool found = false;

    while (found == false && first <= last) {
        middle = (first + last) / 2; // calculate midpoint
        if (array[middle] == value) { // check if midpoint = value, end search if true
            found = true;
            position = middle;
            break;
        }
        else if (array[middle] > value) { // if value is in lower half
        last = middle - 1;
        }
        else { // if value is in upper half
            first = middle + 1;
        }

    }
    return found;
}