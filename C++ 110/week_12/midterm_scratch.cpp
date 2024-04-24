#include <iostream>
#include <cstring>
using namespace std;

int* counter(int a[], int size) {
    // Allocate memory for new array
    int* newArray = new int[size + 1];

    // Set the first element of the new array to the size of the original array
    newArray[0] = size;

    // Copy elements from the original array into the new array
    for (int i = 0; i < size; i++) {
        newArray[i + 1] = a[i];
    }

    return newArray;
}
 
int main() {
    int a[] = {2, 7, 4};
    int size = 3;
    int* result = counter(a, size);

    // Print the elements of the new array
    std::cout << "New array: ";
    for (int i = 0; i < size + 1; ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    // Don't forget to delete the dynamically allocated memory
    delete[] result;

    return 0;
}

    