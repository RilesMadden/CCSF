// IntCollection.cpp
#include "IntCollection.h"
#include <iostream>
using namespace std;

IntCollection::IntCollection() {
    //initialize member data to reflect an empty IntCollection
    size = capacity = 0;
    data = NULL;
}

void IntCollection::addCapacity() {
    //create a new, bigger buffer, copy the current data to it, delete
    //the old buffer, and point our data pointer to the new buffer
    //
    //note: there is a more efficient way to do this using the C
    //memory management function realloc(), but that is beyond the
    //scope of our course
    int* newData;
    capacity += CHUNK_SIZE;
    newData = new int[capacity];
    for (int i = 0; i < size; i++)
        newData[i] = data[i];
    delete[] data;
    data = newData;
}

void IntCollection::add(int value) {
    //first, allocate more memory if we need to
    if (size == capacity)
        addCapacity();

    //now, add the data to our array and increment size
    data[size++] = value;
}

int IntCollection::get(int index) {
    if (index < 0 || index >= size) {
        cout << "ERROR: get() trying to access index out of range.\n";
        exit(1);
    }

    return data[index];
}

int IntCollection::getSize() {
    return size;
}

IntCollection::~IntCollection() {
    delete[] data; // Deconstructor
}

IntCollection::IntCollection(const IntCollection& c) {
    // copy size and capacity from input c
    size = c.size;
    capacity = c.capacity; 
    
    // Allocate memory for the data array and copy data from
    data = new int[capacity];
    for (int i = 0; i < size; i++) {
        data[i] = c.data[i];
    }
}

IntCollection& IntCollection::operator=(const IntCollection& c) {
    if (this != &c) { // Check if different from self
        delete[] data;

        // Copy size and capacity
        size = c.size;
        capacity = c.capacity;

        // Allocate memory for the data array and copy the elements
        data = new int[capacity];
        for (int i = 0; i < size; i++) {
            data[i] = c.data[i];
        }
    }
    return *this; // Return a reference to itself
}

bool IntCollection::operator==(const IntCollection& c) {
    if (size != c.size) { // Return false if size is different
        return false;
    }
    // Compare each element
    for (int i = 0; i < size; i++) {
        if (data[i] != c.data[i]) {
            return false;
            break; // can break if false
        }
    }
    return true; 
}

IntCollection& IntCollection::operator<<(int value) {
    add(value); // Add value to collection
    return *this; // Return a reference to itself
}
