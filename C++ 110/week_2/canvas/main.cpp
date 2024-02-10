// Discussion 2, Question 2
// Write a C++ program which tracks assignment grades.
// Riley Madden, CS110B

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int number_of_assignments, current_assignment_grade;
    double sum_of_grades = 0.0, average_grade;
    char letter_grade;

    cout << "This program will provide the average grade for the assignments entered." << endl;
    cout << "Please enter the number of assignments:" << endl;
    cin >> number_of_assignments;

    // Calculate sum of assignment grades
    for (int assignment_counter = 1; assignment_counter <= number_of_assignments; assignment_counter++) {
        cout << "Please enter the grade for assignment#" << assignment_counter << ":" << endl;
        cin >> current_assignment_grade;

        // Validation to ensure grade entered is 0-100
        while (current_assignment_grade < 0 || current_assignment_grade > 100) {
            cout << "Assignments must be between 0 and 100, please re-enter the grade for assignment#" << assignment_counter << ":" << endl;
            cin >> current_assignment_grade;
        };

        sum_of_grades += current_assignment_grade;
    }
    cout << "The sum of all of the assignment grades is " << sum_of_grades << "." << endl;


    // Average score and assign letter grade
    average_grade = (sum_of_grades / number_of_assignments); 
    if (average_grade >= 90)
        letter_grade = 'A';
    else if (average_grade >= 80)
        letter_grade = 'B';
    else if (average_grade >= 70)
        letter_grade = 'C';
    else if (average_grade >= 60)
        letter_grade = 'D';
    else
        letter_grade = 'F';
    
    cout << fixed << showpoint << setprecision(1); // sets rounding to 1 decimal place
    cout << "The average grade came in at " << average_grade << ", which is a letter grade " << letter_grade << "." << endl;

    return 0;
}