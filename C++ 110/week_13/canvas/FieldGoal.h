// FieldGoal.h - FieldGoal header file
#ifndef FIELDGOAL_H
#define FIELDGOAL_H

#include <iostream>
#include "FeetInches.h"
#include "Person.h"
using namespace std;

class FieldGoal {
    private:
        int goals;
        int attempts;
    public:
        FieldGoal() {
            goals = attempts = 0;
        }
        FieldGoal(int g, int a) {
            goals = g;
            attempts = a;
        }

        double getPercentage() const {
            double percentage = double(goals) / attempts;
            return percentage;
        }

        operator double() const {
            return getPercentage();
        }
};

#endif