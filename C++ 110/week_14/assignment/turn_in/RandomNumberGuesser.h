// RandomNumberGuesser.h
#ifndef RANDOMNUMBERGUESSER_H
#define RANDOMNUMBERGUESSER_H

#include "NumberGuesser.h"
#include <cstdlib>
#include <ctime>

class RandomNumberGuesser : public NumberGuesser {
    public:
        RandomNumberGuesser(int l, int h);
        int getCurrentGuess();
        void higher();
        void lower();
        void reset();
};

#endif
