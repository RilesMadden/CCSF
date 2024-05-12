// IntCollection.cpp
#include "IntCollection.h"

void IntCollection::add(int value) {
    data.push_back(value);
}

int IntCollection::get(int index) {
    return data[index];
}

int IntCollection::getSize() {
    return data.size();
}

IntCollection& IntCollection::operator=(const IntCollection &c) {
    if (this != &c) {
        this->data = c.data;
    }
    return *this;
}

bool IntCollection::operator==(const IntCollection &c) {
    return (this->data == c.data);
}

IntCollection& IntCollection::operator<<(int value) {
    data.push_back(value);
    return *this;
}