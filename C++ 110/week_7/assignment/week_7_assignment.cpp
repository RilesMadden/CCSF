// Week 7 Assignment (Remake of week 5 assignment)
// Records and displays league standings for a baseball league.
// Prompts the user to enter five team names, and five win amounts. Program returns the standings sorted by wins from highest to lowest.
// Riley Madden, 110b Spring 2024

#include <iostream>
#include <string>
using namespace std;


void initializeArrays(string *namesPtr, int *winsPtr, int numTeams);
void sortData(string *namesPtr, int *winsPtr, int numTeams);
void displayData(string *namesPtr, int *winsPtr, int numTeams);
bool playAgain();


int main() {
    bool cont;
    int numTeams;

    // begin main loop
    do {
        // prompt user for number of teams
        cout << "How many teams would you like to enter wins for today?: ";
        cin >> numTeams;

        // create dynamic arrays
        string *names = new string[numTeams];
        int *wins = new int[numTeams];

        initializeArrays(names, wins, numTeams); // prompt user for team names and number of wins
        sortData(names, wins, numTeams); // sorts the Wins array (desc) and mirrors actions on Names array to keep them parallel
        displayData(names, wins, numTeams); // print results
        
        delete[] names;
        delete[] wins;

        cont = playAgain(); // prompt user to go again
    } while (cont);


    cout << "Thanks, please come again!" << endl;
    return 0;
}

// Prompt user to enter a team name and its respective number of wins
void initializeArrays(string *namesPtr, int *winsPtr, int numTeams) {
    for (int i = 0; i < numTeams ; i++) {
        cout << "Enter team #" << i+1 << ": ";
        cin >> namesPtr[i];
        cout << "Enter the wins for team #" << i+1 << ": ";
        cin >> winsPtr[i];
    }
}

// Bubble sorts (desc) on the wins array, will reflect any swaps in the names list to keep parallel
void sortData(string *namesPtr, int *winsPtr, int numTeams) { 
    bool swapped; // set swapped true if any swap occurs
    do {
        swapped = false;
        for (int i = 0; i < (numTeams - 1); i++) {
            if (winsPtr[i] < winsPtr[i + 1]) { // evaluate on Wins array, but perform swaps on both wins and names
                swap(winsPtr[i], winsPtr[i + 1]);
                swap(namesPtr[i], namesPtr[i + 1]);
                swapped = true;
            }
        }
    } while(swapped);
}

// Print results in order from most wins to fewest
void displayData(string *namesPtr, int *winsPtr, int numTeams) {
    cout << "Here are the League Standings:" << endl;
    for (int i = 0; i < numTeams; i++) {
        cout << namesPtr[i] << ": " << winsPtr[i] << endl;
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
How many teams would you like to enter wins for today?: 5
Enter team #1: Lions
Enter the wins for team #1: 57
Enter team #2: Tigers
Enter the wins for team #2: 48
Enter team #3: Bears
Enter the wins for team #3: 68
Enter team #4: Witches
Enter the wins for team #4: 87
Enter team #5: Toto's 
Enter the wins for team #5: 75
Here are the League Standings:
Witches: 87
Toto's: 75
Bears: 68
Lions: 57
Tigers: 48
Would you like to go again (y/n)?: y
How many teams would you like to enter wins for today?: 3
Enter team #1: Munchkins
Enter the wins for team #1: 30
Enter team #2: Slippers
Enter the wins for team #2: 45
Enter team #3: Monkeys
Enter the wins for team #3: 23
Here are the League Standings:
Slippers: 45
Munchkins: 30
Monkeys: 23
Would you like to go again (y/n)?: n
Thanks, please come again!
*/
