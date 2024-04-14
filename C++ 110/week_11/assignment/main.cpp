#include <iostream>
#include "NumberGuesser.h"
using namespace std;

bool promptPlayAgain();
bool promptStandardMode();
bool playAgain;

int main() {
    cout << "Welcome to my number guessing game! You'll think of a number, and I'll try to guess it." << endl;

    do {
        NumberGuesser guesser;
        bool standardMode = promptStandardMode();
        if (standardMode == true) {
            cout << "Excellent, standard mode." << endl;
            guesser = NumberGuesser();
        }
        else {
            cout << "Excellent, BYOB(bounds)!" << endl;
            cout << "You will be prompted to enter your bounds. Your upper bound must be greater than your lower bound, and they must be at least 2 digits apart." << endl;
            int upper, lower;
            cout << "Please enter your lower bound: ";
            cin >> lower;
            cout << "Please enter your upper bound: ";
            cin >> upper;

            while (upper <= lower || upper-lower<2) {
                cout << "Please enter a valid upper bound based on your lower bound of " << lower << ": ";
                cin >> upper;
            }
            
            guesser = NumberGuesser(lower, upper);
        }

        int guess;
        char response;
        do {
            guess = guesser.getCurrentGuess();
            cout << "Is your number " << guess << "? (h/l/c): ";
            cin >> response;

            while (response != 'h' && response != 'l' && response != 'c') {
                cout << "Please enter a valid response (h, l, or c)." << endl;
                cout << "Is your number " << guess << "? (h/l/c): ";
                cin >> response;              
            }

            if (response == 'h') {
                guesser.higher();
            }
            else if (response == 'l') {
                guesser.lower();
            }
        } while (response != 'c');

        cout << "I knew it! Your number is " << guesser.getCurrentGuess() << "." << endl;
        playAgain = promptPlayAgain();
    } while (playAgain);

    cout << "Thanks for playing!" << endl;
    return 0;
}

bool promptPlayAgain() {
    char answer = ' ';
    bool playAgain;
    while (answer != 'y' && answer != 'n') {
        cout << "Would you like to play again (y/n)?: ";
        cin >> answer;
    }
    if (answer == 'y') {
        playAgain = true;
    }
    else {
        playAgain = false;
    }
    
    return playAgain;
}

bool promptStandardMode() {
    int mode = 0;
    cout << "If you would like to play standard mode (1 - 100), enter 1." << endl;
    cout << "If you would like to enter your own bounds, enter 2." << endl;
    do {
        cout << "Which mode would you like to play (1/2)?: ";
        cin >> mode;
    } while (mode != 1 && mode != 2);    
    
    if (mode == 1) {
        return true;
    }
    else {
        return false;
    }
}

/*
Sample Output:
Welcome to my number guessing game! You'll think of a number, and I'll try to guess it.
If you would like to play standard mode (1 - 100), enter 1.
If you would like to enter your own bounds, enter 2.
Which mode would you like to play (1/2)?: 1
Excellent, standard mode.
Is your number 50? (h/l/c): h
Is your number 75? (h/l/c): l
Is your number 62? (h/l/c): h
Is your number 68? (h/l/c): c
I knew it! Your number is 68.
Would you like to play again (y/n)?: y
If you would like to play standard mode (1 - 100), enter 1.
If you would like to enter your own bounds, enter 2.
Which mode would you like to play (1/2)?: 2
Excellent, BYOB(bounds)!
You will be prompted to enter your bounds. Your upper bound must be greater than your lower bound, and they must be at least 2 digits apart.
Please enter your lower bound: 900
Please enter your upper bound: 2000
Is your number 1450? (h/l/c): h
Is your number 1725? (h/l/c): h
Is your number 1863? (h/l/c): h
Is your number 1932? (h/l/c): l
Is your number 1897? (h/l/c): c
I knew it! Your number is 1897.
Would you like to play again (y/n)?: n
Thanks for playing!
*/