// Week 5 Assignment
// Records and displays league standings for a baseball league.
// Prompts the user to enter five team names, and five win amounts. Program returns the standings sorted by wins from highest to lowest.
// Riley Madden, 110b Spring 2024

#include <iostream>
#include <string>
using namespace std;


void initializeArrays(string names[], int wins[], int size);
void sortData(string names[], int wins[], int size);
void displayData(string names[], int wins[], int size);
bool playAgain();


int main() {

    const int NUMBER_OF_TEAMS = 5;
    string names[NUMBER_OF_TEAMS];
    int wins[NUMBER_OF_TEAMS];
    bool cont;

    // begin main loop
    do {
        initializeArrays(names, wins, NUMBER_OF_TEAMS); // prompt user for team names and number of wins
        sortData(names, wins, NUMBER_OF_TEAMS); // sorts the Wins array (desc) and mirrors actions on Names array to keep them parallel
        displayData(names, wins, NUMBER_OF_TEAMS); // print results

        cont = playAgain(); // prompt user to go again
    } while (cont);

    cout << "Thanks, please come again!" << endl;
    return 0;
}

// Prompt user to enter a team name and its respective number of wins
void initializeArrays(string names[], int wins[], int size) {
    for (int i = 0; i < size ; i++) {
        cout << "Enter team #" << i+1 << ": ";
        cin >> names[i];
        cout << "Enter the wins for team #" << i+1 << ": ";
        cin >> wins[i];
    }
}

// Bubble sorts (desc) on the wins array, will reflect any swaps in the names list to keep parallel
void sortData(string names[], int wins[], int size) { 
    bool swapped; // set swapped true if any swap occurs
    do {
        swapped = false;
        for (int i = 0; i < (size - 1); i++) {
            if (wins[i] < wins[i + 1]) { // evaluate on Wins array, but perform swaps on both wins and names
                swap(wins[i], wins[i + 1]);
                swap(names[i], names[i + 1]);
                swapped = true;
            }
        }
    } while(swapped);
}

// Print results in order from most wins to fewest
void displayData(string names[], int wins[], int size) {
    cout << "Here are the League Standings:" << endl;
    for (int i = 0; i < size; i++) {
        cout << names[i] << ": " << wins[i] << endl;
    }

}

// Prompt user if they would like to go again
bool playAgain() {
    char again;
    bool cont = false;
    cout << "Would you like to go again (y/n)?: ";
    cin >> again;
    
    // input validation
    while (again != 'y' && again != 'n') {
        cout << "Please enter only y or n.";
        cout << "Would you like to go again (y/n)?: ";
        cin >> again;
    }

    if (again == 'y') {
        cont = true;
    }

    return cont;
}

/*
Sample output:
Enter team #1: Dodgers
Enter the wins for team #1: 78 
Enter team #2: Giants
Enter the wins for team #2: 99
Enter team #3: Athletics
Enter the wins for team #3: 40
Enter team #4: Astros 
Enter the wins for team #4: 27
Enter team #5: Mariners
Enter the wins for team #5: 92 
Here are the League Standings:
Giants: 99
Mariners: 92
Dodgers: 78
Athletics: 40
Astros: 27
Would you like to go again (y/n)?: n
Thanks, please come again!
*/
