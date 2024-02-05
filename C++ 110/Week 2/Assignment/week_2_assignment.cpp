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
    int random_card, player_card_sum = 0, dealer_card_sum;
    bool bust = false;
    char hit_me = 'y';

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
        cout << "Would you like to hit (y/n)?: " << endl;
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
   return 0;
}