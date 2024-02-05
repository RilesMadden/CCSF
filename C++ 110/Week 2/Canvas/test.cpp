/*
Ask the user how many assignments there are.
Input a grade for each assignment from the user (0 - 100).
Print out the total points scored, and the average score.
Print out the letter grade for the average score using 
the standard grading formula (A >= 90, B >= 80, etc.
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  const int MINIMUM_SCORE = 0,
            MAXIMUM_SCORE = 100;
  int numberOfAssignments, 
      assignmentGrade,
      totalPoints;
  double averagePoints;

  //Get number of assignments
  cout << "How many assignments do you have score for? ";
  cin >> numberOfAssignments;
  //Input validation
  while(numberOfAssignments <= 0)
  {
    cout << "\nPlease enter a positive number. ";
    cin >> numberOfAssignments;
  }

  //Get scores and add them up
  for(int i = 0; i < numberOfAssignments; i++)
  {
    cout << "\nEnter score for assignment #" << (i+1) << ": ";
    cin >> assignmentGrade;
    //Input validation
    while((assignmentGrade < MINIMUM_SCORE) || (assignmentGrade > MAXIMUM_SCORE))
    {
      cout << "\nPlease enter a number between 0 and 100. ";
      cin >> assignmentGrade;
    }
    totalPoints = totalPoints + assignmentGrade;
  }
  cout << "\nTotal points for all assignments: " << totalPoints;

  //Calculate average
  averagePoints = round(static_cast<double>(totalPoints) / numberOfAssignments);
  cout << "\nAverage points per assignment: " << averagePoints;

  //Display letter grade for average score
  if(averagePoints >= 90)
    cout << "\nYour average grade is A." << endl;
  else if(averagePoints >= 80)
    cout << "\nYour average grade is B." << endl;
  else if(averagePoints >= 70)
    cout << "\nYour average grade is C." << endl;
  else if(averagePoints >= 60)
    cout << "\nYour average grade is D." << endl;
  else
    cout << "\nYour average grade is F." << endl;

  return 0;
}