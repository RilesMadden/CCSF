/*Question 2
Write a few lines of C++ which does the following:

Output a statement to ask the user to input the score for the home team today, and store the user's response in a variable homeScore of type int.

Output a statement to ask the user to input the score for the visitor team today, and store the user's response in a variable visitorScore of type int

Display the scores, and tell the user who won the game

Also, tell the user if any of the following happened:
    One of the teams had a low score (<3)
    Both of the teams had a low score
    Use a const int for a low score instead of the magic number of 3*/
#include <iostream>
using namespace std;


int main()
{
    int homeScore;
    int visitorScore;
    const int lowScore = 3;

    cout << "How many points did the home team score today?\n";
    cin >> homeScore;
    cout << "How many points did the visiting team score today?\n";
    cin >> visitorScore;

    // Determine who won
    cout << "With a final score of " << homeScore << " to " << visitorScore << "..." << endl; 

    if (homeScore > visitorScore)
        cout << "the home team was victorious!\n";
    else if (homeScore < visitorScore)
        cout << "the visiting team took the victory!\n";
    else
        cout << "it was a draw!\n";
    
    
    // Determine if low scores
    if (homeScore < lowScore && visitorScore < lowScore)
        cout << "It was a low scoring match for both teams!";
    else if (homeScore < lowScore)
        cout << "It was a rough day for the home team, with a low score of " << homeScore << " points.";
    else if (visitorScore < lowScore)
        cout << "The visiting team struggled against the home team, only managing " << visitorScore << " points.";

    cout << "\n";
    return 0;
}