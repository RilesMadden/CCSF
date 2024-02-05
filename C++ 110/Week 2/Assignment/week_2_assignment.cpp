// Assignment 2 - Blackjack
// Blackjack and dealer
// Riley Madden, CS110B

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    // establish random function
    unsigned seed = time(0);
    srand(seed);

    const int MIN_CARD_VALUE = 1;
    const int MAX_CARD_VALUE = 10;
    int random_card, player_card_sum = 0, dealer_card_sum = 0;
    bool bust = false;
    char play_again = 'y';
    char hit_me = 'y';

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

        while (bust == false && hit_me == 'y'){
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

        // Dealer's turn
        if (bust == false){
            cout << "Ok, you have a total of " << player_card_sum << ", let's see if you can beat the dealer." << endl;
            random_card = (rand() % (MAX_CARD_VALUE - MIN_CARD_VALUE + 1)) + MIN_CARD_VALUE;
            dealer_card_sum += random_card;
            cout << "The dealer's first card is: " << random_card << endl;

            random_card = (rand() % (MAX_CARD_VALUE - MIN_CARD_VALUE + 1)) + MIN_CARD_VALUE;
            dealer_card_sum += random_card;
            cout << "The dealer's second card is: " << random_card << endl;
            cout << "Their current total is: " << dealer_card_sum << endl;

            while (dealer_card_sum < 17) {
                cout << "The dealer's total is less than 17, so they will hit." << endl;
                random_card = (rand() % (MAX_CARD_VALUE - MIN_CARD_VALUE + 1)) + MIN_CARD_VALUE;
                dealer_card_sum += random_card;
                cout << "The dealer's hit card is: " << random_card << endl;
                cout << "Their current total is: " << dealer_card_sum << endl;
            };

            // Determine winner
            // if (player_card_sum > dealer_card_sum) {
            //     cout << "Congratulations! You've won!" << endl;
            //     cout << "Your score of " << player_card_sum << " beat the dealer's score of " << dealer_card_sum << "." << endl;
            // };
            // else if (dealer_card_sum > player_card_sum) {
            //     cout << "The dealer won this time!" << endl;
            //     cout << "Their score of " << dealer_card_sum << " beat your score of " << player_card_sum << "." << endl;
            //     cout << "Better luck next time!" << endl;
            // };
        }

        cout << "Would you like to play again (y/n)?:" << endl;
        cin >> play_again;
        if (play_again == 'y') {
        bust = false;
        hit_me = 'y';
        player_card_sum = 0;
        dealer_card_sum = 0;
        };
    };
   return 0;
}