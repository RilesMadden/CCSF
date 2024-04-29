// Person.h - Person header file
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "FeetInches.h"
#include "FieldGoal.h"
using namespace std;

class Person {
    private:
        string firstName;
        string lastName;
        FeetInches height;
        int weight;
        FieldGoal percentage;

    public:
        Person() {
            firstName = lastName = "";
            weight = 0;
            // height and percentage is implied 0 here from constructors in FeetInches & FieldGoal class
        }
        Person(string fName, string lName, FeetInches h, int w, FieldGoal p) {
            firstName = fName;
            lastName = lName;
            height = h;
            weight = w;
            percentage = p;
        }
        void print() {
            cout << firstName << " " << lastName << endl;
            cout << "Height: " << height.getFeet() << "\'" << height.getInches() << "\"" << endl;
            cout << "Weight: " << weight << " lb." << endl;
            cout << "Field goal percentage: " << percentage.getPercentage() << endl;
        }
};

#endif