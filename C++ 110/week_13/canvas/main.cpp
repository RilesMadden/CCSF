// main.cpp
#include <iostream>
#include "FeetInches.h"
#include "Person.h"
#include "FieldGoal.h"
using namespace std;

int main() {
    FeetInches height(6,1);

    FieldGoal percentage(436, 542);

    Person player("Sebastian", "Janikowski", height, 260, percentage);

    player.print();

    return 0;
}


/*
Output:
Sebastian Janikowski
Height: 6'1"
Weight: 260 lb.
Field goal percentage: 0.804428
*/

