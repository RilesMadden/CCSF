# Assignment 2 - Blackjack
# A simple Blackjack game with player and dealer. Ace and Face cards are not considered. 
# Riley Madden, CS110B

import random

play_again = 'y'
hit_me = 'y'
press_to_continue = 'c'
player_sum = 0
dealer_sum = 0
card = 0

def draw_card():
    random_card = random.randint(1,10)
    return random_card

while play_again == 'y':
    player_sum = 0
    dealer_sum = 0
    card = 0
    bust = False

    print("Let's play Blackjack!")
    card = draw_card()
    player_sum += card
    print(f"Your first card is: {card}")

    card = draw_card()
    player_sum += card
    print(f"Your second card is: {card}")
    print(f"Your sum is: {player_sum}")
    
    while (bust == False and hit_me == 'y'):
        hit_me = input("Would you like to hit (y/n)?: ")
        if hit_me == 'y':
            card = draw_card()
            player_sum += card
            print(f"You drew a {card}")
            print(f"Your new total is: {player_sum}")

            if player_sum > 21:
                print("Bust!")
                bust = True

    while bust == False:
        print("Ok, let's see if you can beat the dealer.")
        card = draw_card()
        dealer_sum += card
        print(f"The dealer's first card: {card}")
        card = draw_card()
        dealer_sum += card
        print(f"The dealer's second card is: {card}")
        print(f"The dealer's total is: {dealer_sum}")

        while dealer_sum < 17:
            print("The dealer must draw a card.")
            card = draw_card()
            dealer_sum += card
            press_to_continue = input("Enter c to continue: ")




    play_again = input("Would you like to play again (y/n)?: ")

