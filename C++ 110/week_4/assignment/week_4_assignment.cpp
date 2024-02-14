// Week 4 Assignment
// Poker Hand
// Write a program that reads five cards from the user, then analyzes the cards and prints out the category of poker hand that they represent.
// Riley Madden, 110b
#include <iostream>
using namespace std;


const int HANDSIZE = 5;
void drawHand(int hand[]);
bool containsPair(int hand[]);
bool containsTwoPair(int hand[]);
bool containsThreeOfaKind(int hand[]);
bool containsStraight(int hand[]);
bool containsFullHouse(int hand[]);
bool containsFourOfaKind(int hand[]);

int main() {
    cout << "Welcome to my poker shop." << endl;
    cout << "Please enter five numeric cards, no face cards. Use 2 - 9." << endl;
    int hand[5];
    drawHand(hand);

    cout << containsPair(hand) << endl;



    return 0;
}

void drawHand(int hand[]) {
    for (int i = 0; i < 5; i++) {
        cout << "Please enter card " << (i + 1) << ": ";
        cin >> hand[i];
    }
}
bool containsPair(int hand[]){
    bool pair = false;
    for (int i = 0; i < 5; i++){
        for (int j = i + 1; j < 5; j++){
            if (hand[i] == hand[j]) {
                pair = true;
                break;
            }
        }
        if (pair){
            break;
        }
    }
    return pair;
}

