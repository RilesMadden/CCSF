// Assignment 2 - Blackjack
// A simple Blackjack game with player and dealer. Ace and Face cards are not considered. 
// Riley Madden, CS110B

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    // establish random function for drawing cards
    unsigned seed = time(0);
    srand(seed);

    const int MIN_CARD_VALUE = 1;
    const int MAX_CARD_VALUE = 10;
    int random_card, player_card_sum = 0, dealer_card_sum = 0;
    bool bust = false;
    char play_again = 'y';
    char hit_me = 'y';
    char press_to_continue = 'c';

    // Begin game loop
    while (play_again == 'y') {

        // Player's turn:
        cout << "Welcome to the Blackjack Barn! Let's get your hand started." << endl;
        random_card = (rand() % (MAX_CARD_VALUE - MIN_CARD_VALUE + 1)) + MIN_CARD_VALUE;
        player_card_sum += random_card;
        cout << "Your first card is: " << random_card << endl;

        random_card = (rand() % (MAX_CARD_VALUE - MIN_CARD_VALUE + 1)) + MIN_CARD_VALUE;
        player_card_sum += random_card;
        cout << "Your second card is: " << random_card << endl;
        cout << "Your current total is: " << player_card_sum << endl;

        while (bust == false && hit_me == 'y'){ // Player hit loop
            cout << "Would you like to hit (y/n)?: ";
            cin >> hit_me;
            if (hit_me == 'y') {
                random_card = (rand() % (MAX_CARD_VALUE - MIN_CARD_VALUE + 1)) + MIN_CARD_VALUE;
                player_card_sum += random_card;
                cout << "Ok, hit! Your next card is: " << random_card << endl;
                cout << "Your new total is: " << player_card_sum << endl;
            };
            if (player_card_sum == 21) {
                cout << "Nice! A blackjack! Let's see if the dealer can match." << endl;
                hit_me = 'n';
            }
            else if (player_card_sum >= 22) {
                cout << "Oh no! It's a bust!" << endl;
                bust = true;
            };
        };

        // Dealer's turn, will only proceed if player did not bust
        if (bust == false) {
            cout << "Ok, you have a total of " << player_card_sum << ", let's see if you can beat the dealer." << endl;
            random_card = (rand() % (MAX_CARD_VALUE - MIN_CARD_VALUE + 1)) + MIN_CARD_VALUE;
            dealer_card_sum += random_card;
            cout << "The dealer's first card is: " << random_card << endl;

            random_card = (rand() % (MAX_CARD_VALUE - MIN_CARD_VALUE + 1)) + MIN_CARD_VALUE;
            dealer_card_sum += random_card;
            cout << "The dealer's second card is: " << random_card << endl;
            cout << "Their current total is: " << dealer_card_sum << endl;

            while (dealer_card_sum < 17) { // Dealer hit loop, will stop once score exceeds 16
                cout << "The dealer's total is less than 17, so they will hit." << endl;
                cout << "(Press c to continue) ";
                cin >> press_to_continue;
                random_card = (rand() % (MAX_CARD_VALUE - MIN_CARD_VALUE + 1)) + MIN_CARD_VALUE;
                dealer_card_sum += random_card;
                cout << "The dealer's hit card is: " << random_card << endl;
                cout << "Their current total is: " << dealer_card_sum << endl;
            };

            // Determine winner
            if (dealer_card_sum > 21) {
                cout << "The dealer busts! You've won!" << endl;
            }
            else if (player_card_sum > dealer_card_sum) {
                cout << "Congratulations! You've won!" << endl;
                cout << "Your score of " << player_card_sum << " beat the dealer's score of " << dealer_card_sum << "." << endl;
            }
            else if (dealer_card_sum > player_card_sum) {
                cout << "The dealer won this time!" << endl;
                cout << "Their score of " << dealer_card_sum << " beat your score of " << player_card_sum << "." << endl;
                cout << "Better luck next time!" << endl;
            }
            else {
                cout << "It's a push! Both players have a score of " << player_card_sum << "." << endl;
            };
        
        };

        // End game and reset if player wants to play again
        cout << "Would you like to play again (y/n)?: ";
        cin >> play_again;

        if (play_again == 'y') {
        bust = false;
        hit_me = 'y';
        player_card_sum = 0;
        dealer_card_sum = 0;
        };
    };
    cout << "Thanks for playing!" << endl;
    return 0;
}

/* Sample output:
Welcome to the Blackjack Barn! Let's get your hand started.
Your first card is: 8
Your second card is: 8
Your current total is: 16
Would you like to hit (y/n)?: n
Ok, you have a total of 16, let's see if you can beat the dealer.
The dealer's first card is: 6
The dealer's second card is: 4
Their current total is: 10
The dealer's total is less than 17, so they will hit.
(Press c to continue) c
The dealer's hit card is: 4
Their current total is: 14
The dealer's total is less than 17, so they will hit.
(Press c to continue) c
The dealer's hit card is: 8
Their current total is: 22
The dealer busts! You've won!
Would you like to play again (y/n)?: y
Welcome to the Blackjack Barn! Let's get your hand started.
Your first card is: 9
Your second card is: 5
Your current total is: 14
Would you like to hit (y/n)?: y
Ok, hit! Your next card is: 9
Your new total is: 23
Oh no! It's a bust!
Would you like to play again (y/n)?: n
Thanks for playing!
*/