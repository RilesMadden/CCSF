// Week 15 - Canvas Post
// Create a program which will ask the user to enter a list of names and provide a poker tournament order.
// Riley Madden, 110b Spring 2024

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printNames(vector<string>);
vector<string> promptPlayerNames(int numPlayers);

int main() {
    srand(time(NULL));
    int numPlayers;
    
    cout << "Welcome to the tournament!" << endl;    
    cout << "Enter the number of Players: ";
    cin >> numPlayers;

    // Prompt for player names
    vector<string> players = promptPlayerNames(numPlayers);

    // Sort player names alphabetically
    sort(players.begin(), players.end());

    // Print sorted list
    cout << "Sorted list of names:" << endl;
    printNames(players);

    // Randomize player order
    cout << "Great! Now that we have all of the contestants, here is the random order for this round:" << endl;
    random_shuffle(players.begin(), players.end());
    printNames(players);

    cout << "Good luck!" << endl;
    return 0;
}

vector<string> promptPlayerNames(int numPlayers) { // collect player names
    vector<string> players;
    for (int i = 0; i < numPlayers; ++i) {
        string name;
        cout << "Enter the name for Player#" << i + 1 << ": ";
        cin >> name;
        players.push_back(name);
    }
    return players;
}

void printNames(vector<string> players) { // Prints the player names
        // I include a count mechanism here to add commas after each name except if the player is the last in the vector
        int count = 0;
        for (string player : players) {
        cout << player;
        if (count < (players.size() - 1)) {
            cout << ", ";
            count += 1;            
        }
        else {
            cout << "." << endl;
        }
    }    
}

/*
Sample output:
Welcome to the tournament!
Enter the number of Players: 5
Enter the name for player#1: Justin 
Enter the name for player#2: JC
Enter the name for player#3: Chris
Enter the name for player#4: Lance
Enter the name for player#5: Joey
Sorted list of names:
Chris, JC, Joey, Justin, Lance.
Great! Now that we have all of the contestants, here is the random order for this round:
Chris, Lance, JC, Justin, Joey.
Good luck!
*/