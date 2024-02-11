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

void playOneGame() { // Primary game loop
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
        cout << "Would you like to enter random mode (y/n)?: "; // Determines if standard midpoint or random midpoint is used
        cin >> randomMode;
    } while (randomMode != 'y' && randomMode != 'n');
    cout << "Here we go!" << endl;

    do {
        if (randomMode == 'y') {
            int midpoint;
            midpoint = getRandomMidpoint(low, high); // Picks random number between endpoints
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
            midpoint = getMidpoint(low, high); // Gets midpoint of endpoints
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
}

char getUserResponseToGuess(int guess) {
    char userResponse;
    cout << "Is your number " << guess << "? (h/l/c): ";
    cin >> userResponse;

    // input validation
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
    // Modifying low and high parameters to exclude them from guesses (avoiding repeat guesses)
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
Sample output. First passthrough is with standard mode, second is with random mode.
----
Welcome to my number guessing game!
Please think of a number between 1 and 100 (exclusive).
I'll attempt to guess it, and you'll tell me if I'm correct, or if your number is lower or higher than my guess.
Ready? Please enter 'c' to continue: c
Would you like to enter random mode (y/n)?: n
Here we go!
Is your number 50? (h/l/c): h
Is your number 75? (h/l/c): l
Is your number 62? (h/l/c): h
Is your number 68? (h/l/c): l
Is your number 65? (h/l/c): c
Aha! I knew it!
Would you like to play again (y/n)?: y
Welcome to my number guessing game!
Please think of a number between 1 and 100 (exclusive).
I'll attempt to guess it, and you'll tell me if I'm correct, or if your number is lower or higher than my guess.
Ready? Please enter 'c' to continue: c
Would you like to enter random mode (y/n)?: y
Here we go!
Is your number 93? (h/l/c): l
Is your number 75? (h/l/c): l
Is your number 40? (h/l/c): l
Is your number 3? (h/l/c): h
Is your number 8? (h/l/c): h
Is your number 25? (h/l/c): h
Is your number 30? (h/l/c): l
Is your number 28? (h/l/c): l
Is your number 27? (h/l/c): c
Aha! I knew it!
Would you like to play again (y/n)?: n
Thanks for playing!

*/