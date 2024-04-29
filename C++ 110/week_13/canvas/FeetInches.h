// Week 13 - Canvas Post
// Question 2 - FeetInches, Person, Field Goal Classes
// Riley Madden, 110b Spring 2024

// FeetInches.h - FeetInches header file
#ifndef FEETINCHES_H
#define FEETINCHES_H

#include <iostream>

class FeetInches {
    private:
        int feet;
        int inches;
    public:
        FeetInches() { 
            feet = inches = 0;
        }
        FeetInches(int f, int i) {
            feet = f;
            inches = i;
        }
        void setFeet(int f) {
            feet = f;
        }
        void setInches(int i) {
            inches = i;
        }
        int getFeet() {
            return feet;
        }
        int getInches() {
            return inches;
        }
        operator double() {
            return (feet + (inches/12.0));
        } 
        operator int() {
            return feet;
        }
};

#endif