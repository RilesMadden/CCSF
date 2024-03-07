// Midterm question 20

#include <iostream>
using namespace std;

void printSome(const int array[], int size);

int main() {

    int size = 10;
    const int numberList[size] = {9, 2, 3, 1, 10, 5, 6, 9, 2, 15};

    printSome(numberList, size);

    return 0;
}

void printSome(const int array[], int size) { // Prints every integer > 5 in passed array
    for (int i = 0; i < size; i++) {
        if (array[i] > 5) {
            cout << array[i] << endl;
        }
    }
}






// Part 1. Write a function which takes two parameters: an array of ints and the size of the array. It should output every element in the array greater than 5 to the screen.  Your function must have the following signature:

// void printSome(const int array[], int size);

 

// Part 2.  Write a simple main() function which demonstrates your function by doing the following:

// - create an array of ints and give its elements some reasonable values.  At least one of its elements should be greater than 5, and at least one of its elements should be less than 5.

// - call your printSome function with this array and its size as parameters

 

// Your answer must be a complete C++ program which would compile and run properly on hills.