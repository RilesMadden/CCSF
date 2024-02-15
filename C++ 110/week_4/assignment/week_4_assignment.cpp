// Week 4 Assignment
// Poker Hand
// Write a program that reads five cards from the user, then analyzes the cards and prints out the category of poker hand that they represent.
// Riley Madden, 110b

#include <iostream>
using namespace std;

void drawHand(int draw[]);
void countHand(int draw[], int hand[]);

bool containsPair(int hand[]);
bool containsTwoPair(int hand[]);
bool containsThreeOfaKind(int hand[]);
bool containsStraight(int hand[]);
bool containsFullHouse(int hand[]);
bool containsFourOfaKind(int hand[]);
bool containsFiveOfaKind(int hand[]);

int main() {
    char playAgain = 'y';
    do {
    cout << "Welcome to my poker shop!" << endl;

    // Obtain user's poker hand
    cout << "Please enter five numeric cards, no face cards. Use 2 - 9." << endl;
    int draw[5] = {0, 0, 0, 0, 0}; 
    drawHand(draw);

    // Create an array of length 8 where each element represents the count of its respective card
    // The 0th element represents the card "2", the 1st element represents the card "3", etc
    // Ex: The hand of {3, 3, 9, 8, 9} would be represented by {0, 2, 0, 0, 0, 0, 1, 2}
    int hand[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    countHand(draw, hand);

    // Determine the winning hand, in order from most to least valuable
    // The most valuable hand wins, so the first successful one is the winner
    if (containsFiveOfaKind(hand)) {
        cout << "Hey you can't have 5 of the same card! Try again!" << endl;
    }
    else if (containsFourOfaKind(hand)) {
        cout << "Wow, four of a kind!" << endl;
    }
    else if (containsFullHouse(hand)) {
        cout << "Nice, a full house!" << endl;
    }
    else if (containsStraight(hand)) {
        cout << "Woohoo, a straight!" << endl;
    } 
    else if (containsThreeOfaKind(hand)) {
        cout << "Bam! Three of a kind!" << endl;
    }
    else if (containsTwoPair(hand)) {
        cout << "Two pairs!" << endl;
    }
    else if (containsPair(hand)) {
        cout << "A pair!" << endl;
    }
    else {
        cout << "Bummer, only high card! Better luck next time!" << endl;
    }

    cout << "Would you like to play again (y/n)?: ";
    cin >> playAgain;
    } while (playAgain == 'y');

    cout << "Thanks for playing!" << endl;
    return 0;
}

void drawHand(int draw[]) { // Prompts user to enter 5 integers between 2 - 9 inclusive
    for (int i = 0; i < 5; i++) {
        cout << "Please enter card " << (i + 1) << ": ";
        cin >> draw[i];

        // input validation
        while (draw[i] < 2 || draw[i] > 9) {
            cout << "Cards must be between 2 and 9 (inclusive)." << endl;
            cout << "Please enter a valid value for card " << (i + 1) << ": ";
            cin >> draw[i];
        }
    }
}

void countHand(int draw[], int hand[]) { // Aggregates the count of each card
    for (int i = 0; i < 5; i++) {
        hand[(draw[i]-2)] += 1;
    };
}

bool containsPair(int hand[]) { // Checks for a card with count of at least 2
    bool pair = false;
    for (int i = 0; i < 8; i++) {
        if (hand[i] >= 2) {
            pair = true;
            break;
        }
    }
    return pair;
}

bool containsTwoPair(int hand[]) { // Checks for two separate cards with count of at least 2
    bool pair = false;
    bool twoPair = false;
    for (int i = 0; i < 8; i++) {
        if (pair == true) {
            if (hand[i] >= 2) {
                twoPair = true;
                break;
            }
        }
        else {
            if (hand[i] >= 2) {
                pair = true;
            }
        }
        }
     return twoPair;
}

bool containsThreeOfaKind(int hand[]) { // Checks for a card with count of at least 3
    bool triple = false;
    for (int i = 0; i < 8; i++) {
        if (hand[i] >= 3) {
            triple = true;
            break;
        }
    }
    return triple;
}

bool containsStraight(int hand[]) { // Checks for a continuous sequence of length 5 all with count 1
    bool straight = false;
    int straight_sum = 0;
    
    // Straights are only possible starting from card values 2, 3, 4, 5.
    // This means we only need to check elements 0 - 3 in our array 'hand'

    for (int i = 0; i < 4; i++) { 
        if (hand[i] > 1) { // if any instance of count > 1, straight is not possible
            break;
        }
        // If a count of 1 is found, the next 4 elements all must equal 1.
        // Will keep track with a counter, and if this sum equals 5 while all equalling count of 1, we know it's a straight 
        else if (hand[i] == 1){
            int straight_sum = 1;
            for (int j = 1; j < 5; j++) {
                if (hand[i+j] == 1) {
                    straight_sum += 1;
                }
                else {
                    break;
                }
            }
            if (straight_sum == 5) {
                straight = true;
                break;
            }
        }
    }
    return straight;
}

bool containsFullHouse(int hand[]) { // Checks for a card with count 3 and a separate card with count 2
    bool two = false;
    bool three = false;
    bool fullHouse = false;
    for (int i = 0; i < 8; i++) {
        if (hand[i] == 2) {
            two = true;
        }
        else if (hand[i] == 3) {
            three = true;
        }
    }
    if (two == true && three == true) {
        fullHouse = true;
    }
    return fullHouse;
}

bool containsFourOfaKind(int hand[]) { // Checks for a card with count of 4
    bool four = false;
    for (int i = 0; i < 8; i++) {
        if (hand[i] == 4) {
            four = true;
            break;
        }
    }
    return four;
}

bool containsFiveOfaKind(int hand[]) { // Checks for a card with count of 5 (cheaters)
    bool five = false;
    for (int i = 0; i < 8; i++) {
        if (hand[i] == 5) {
            five = true;
            break;
        }
    }
    return five;
}

/* Sample output:
Welcome to my poker shop!
Please enter five numeric cards, no face cards. Use 2 - 9.
Please enter card 1: 7
Please enter card 2: 6
Please enter card 3: 6
Please enter card 4: 7
Please enter card 5: 6
Nice, a full house!
Would you like to play again (y/n)?: y
Welcome to my poker shop!
Please enter five numeric cards, no face cards. Use 2 - 9.
Please enter card 1: 2
Please enter card 2: 3
Please enter card 3: 4
Please enter card 4: 5
Please enter card 5: 6
Woohoo, a straight!
Would you like to play again (y/n)?: y
Welcome to my poker shop!
Please enter five numeric cards, no face cards. Use 2 - 9.
Please enter card 1: 2
Please enter card 2: 1
Cards must be between 2 and 9 (inclusive).
Please enter a valid value for card 2: 3
Please enter card 3: 4
Please enter card 4: 5
Please enter card 5: 6
Woohoo, a straight!
Would you like to play again (y/n)?: y
Welcome to my poker shop!
Please enter five numeric cards, no face cards. Use 2 - 9.
Please enter card 1: 5
Please enter card 2: 3
Please enter card 3: 2
Please enter card 4: 9
Please enter card 5: 7
Bummer, only high card! Better luck next time!
Would you like to play again (y/n)?: n
Thanks for playing!
*/


