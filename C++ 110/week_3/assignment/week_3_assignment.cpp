// Week 3 Assignment
// Number Guesser
// Riley Madden, CS110B

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void playOneGame();
char getUserResponseToGuess(int);
bool shouldPlayAgain();
int getMidpoint(int, int), getRandomMidpoint(int, int);

int main() {
    unsigned seed = time(0);
    srand(seed);

    do {
        playOneGame();
    } while (shouldPlayAgain());

    cout << "Thanks for playing!" << endl;
    return 0;
}

void playOneGame() { // complete guessing game on the range of 1 to 100.
    char userResponse, cont, randomMode;
    int low = 1, high = 100;
    
    cout << "Welcome to my number guessing game!" << endl;
    cout << "Please think of a number between 1 and 100 (exclusive)." << endl;
    cout << "I'll attempt to guess it, and you'll tell me if I'm correct, or if your number is lower or higher than my guess." << endl;
    do {
        cout << "Ready? Please enter 'c' to continue: ";
        cin >> cont;
    } while (cont != 'c');

    do {
        cout << "Would you like to enter random mode (y/n)?: ";
        cin >> randomMode;
    } while (randomMode != 'y' && randomMode != 'n');
    cout << "Here we go!" << endl;

    do {
        if (randomMode == 'y') {
            int midpoint;
            midpoint = getRandomMidpoint(low, high); // Random getRandomMidpoint function
            userResponse = getUserResponseToGuess(midpoint);
            if (userResponse == 'h') {
                low = midpoint;
            }
            else if (userResponse == 'l') {
                high = midpoint;
            }
        }
        else {
            int midpoint;
            midpoint = getMidpoint(low, high); // Standard getMidpoint function
            userResponse = getUserResponseToGuess(midpoint);
            if (userResponse == 'h') {
                low = midpoint;
            }
            else if (userResponse == 'l') {
                high = midpoint;
            }
        }
    } while (userResponse != 'c');
    cout << "Aha! I knew it!" << endl;

    // Want to get it working this way, but it's not working
    // do {
    //     if (randomMode == 'y') {
    //         midpoint = getRandomMidpoint(low, high); // Random getRandomMidpoint function
    //     }
    //     else {
    //         midpoint = getMidpoint(low, high); // Standard getMidpoint function
    //     };

    //     userResponse = getUserResponseToGuess(midpoint);
    //     if (userResponse == 'h') {
    //         low = midpoint;
    //     }
    //     else if (userResponse == 'l') {
    //         high = midpoint;
    //     }
    // } while (userResponse != 'c');
    // cout << "Aha! I knew it!" << endl;
}

char getUserResponseToGuess(int guess) {
    char userResponse;
    cout << "Is your number " << guess << "? (h/l/c): ";
    cin >> userResponse;
    while (userResponse != 'h' && userResponse!= 'l' && userResponse!= 'c') {
        cout << "Please enter a valid entry. Enter 'h' for higher, 'l' for lower, or 'c' for correct." << endl;
        cout << "Is your number " << guess << "? (h/l/c): ";
        cin >> userResponse;
    }
    return userResponse;
}

int getMidpoint(int low, int high) {
    int midpoint = ((low + high) / 2);
    return midpoint;
}

int getRandomMidpoint(int low, int high) {
    low += 1;
    high -= 1;
    int randomMidpoint = (rand() % (high - low + 1)) + low;
    return randomMidpoint;
}

bool shouldPlayAgain() { // determines if user wants to play again
    char userResponse;
    cout << "Would you like to play again (y/n)?: ";
    cin >> userResponse;
    if (userResponse == 'y') {
        return true;
    }
    else {
        return false;
    }
}

/*
Sample output with standard getMidpoint():

Welcome to my number guessing game!
Please think of a number between 1 and 100.
I'll attempt to guess it, and you'll tell me if I'm correct, or if your number is lower or higher than my guess.
Ready? Please enter 'c' to continue: c
Here we go!
Is your number 50? (h/l/c): l
Is your number 25? (h/l/c): h
Is your number 37? (h/l/c): c
Aha! I knew it!
Would you like to play again (y/n)?: y
Welcome to my number guessing game!
Please think of a number between 1 and 100.
I'll attempt to guess it, and you'll tell me if I'm correct, or if your number is lower or higher than my guess.
Ready? Please enter 'c' to continue: c
Here we go!
Is your number 50? (h/l/c): h
Is your number 75? (h/l/c): c
Aha! I knew it!
Would you like to play again (y/n)?: n
Thanks for playing!




*/