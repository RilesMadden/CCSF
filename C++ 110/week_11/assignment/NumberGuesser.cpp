// NumberGuesser.cpp
#include <iostream>
#include "NumberGuesser.h"
using namespace std;

NumberGuesser::NumberGuesser() {
    lowerBound = 1;
    upperBound = 100;
    guess = 0;
}

NumberGuesser::NumberGuesser(int lower, int upper) {
    lowerBound = lower;
    upperBound = upper;
    guess = 0;

}

void NumberGuesser::higher() {
    lowerBound = guess + 1;
}

void NumberGuesser::lower() {
    upperBound = guess - 1;
}

int NumberGuesser::getCurrentGuess() {
    guess = (lowerBound + upperBound) / 2;
    return guess;
}    

void NumberGuesser::reset() {
        lowerBound = 1;
        upperBound = 100;
        guess = 0;
}
