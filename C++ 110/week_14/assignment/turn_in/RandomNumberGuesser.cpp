// RandomNumberGuesser.cpp
#include "RandomNumberGuesser.h"

RandomNumberGuesser::RandomNumberGuesser(int l, int h) : NumberGuesser(l, h) {
    srand(time(0));
}

int RandomNumberGuesser::getCurrentGuess() {
    return (rand() % (high - low + 1) + low);
}

void RandomNumberGuesser::higher() {
    low = getCurrentGuess() + 1;
}

void RandomNumberGuesser::lower() {
    high = getCurrentGuess() - 1;
}

void RandomNumberGuesser::reset() {
    low = originalLow;
    high = originalHigh;
    srand(time(0)); // Reset the random number generator
}
