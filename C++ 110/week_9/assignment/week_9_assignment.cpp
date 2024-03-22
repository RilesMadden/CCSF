// Week 9 Assignment
// Baseball League Standings
// Riley Madden, 110b Spring 2024

#include <iostream>
#include <cstring>
using namespace std;

struct WinRecord {
    int wins;
    char* name;
};

void initializeData(WinRecord* standings, int size);
void sortData(WinRecord* standings, int size);
void displayData(WinRecord* standings, int size);
bool playAgain();
char* getLine();


int main() {  
    bool cont;

    do {
        // prompt user for number of teams
        int numTeams;
        cout << "How many teams will you be recording today?: ";
        cin >> numTeams;

        WinRecord* standings = new WinRecord[numTeams];
        initializeData(standings, numTeams); // prompt user to enter names and wins
        sortData(standings, numTeams);
        displayData(standings, numTeams);

        // delete memory allocated names
        for (int i = 0; i < numTeams; ++i) {
            delete[] standings[i].name;
        }

        // delete memory allocated standings
        delete[] standings;

        cont = playAgain();
    } while (cont);

    cout << "Thanks, please come again!" << endl;
    return 0;
}

void initializeData(WinRecord* standings, int size) {
    cin.ignore();
    for (int i = 0; i < size ; i++) {
        cout << "Enter team name: ";
        standings[i].name = getLine();
        cout << "Enter the wins for team #" << i+1 << ": ";
        cin >> standings[i].wins;
        cin.ignore();
    }
}

void sortData(WinRecord* standings, int size) { // compares each win to the one next to it and will swap it to get in order, will continue until no swap has completed
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < (size - 1); i++) { 
            if (standings[i].wins < standings[i + 1].wins) {
                swap(standings[i], standings[i + 1]);
                swapped = true;
            }
        }
    } while(swapped);
}

void displayData(WinRecord* standings, int size) { // prints teams and wins, data is already sorted
    cout << "Here are the League Standings:" << endl;
    for (int i = 0; i < size; i++) {
        cout << standings[i].name << ": " << standings[i].wins << endl;
    }
}

bool playAgain() { // prompt user to play again
    char again;
    bool cont = false;
    cout << "Would you like to go again (y/n)?: ";
    cin >> again;
    
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

char* getLine() { // function to obtain team name provided by professor
    const int BUFFER_SIZE = 1000;
    char buffer[BUFFER_SIZE];
    cin.getline(buffer, BUFFER_SIZE);
    int length = strlen(buffer);
    char *rValue = new char[length + 1];
    strcpy(rValue, buffer);
    return rValue;
}

/*
Sample output:
How many teams will you be recording today?: 5
Enter team name: Giants
Enter the wins for team #1: 50
Enter team name: Padres
Enter the wins for team #2: 45
Enter team name: Dodgers
Enter the wins for team #3: 65
Enter team name: Angels
Enter the wins for team #4: 20
Enter team name: Yankees
Enter the wins for team #5: 8
Here are the League Standings:
Dodgers: 65
Giants: 50
Padres: 45
Angels: 20
Yankees: 8
Would you like to go again (y/n)?: n
Thanks, please come again!"
*/