// NumberGuesser.h - Rectangle header file
#ifndef NUMBERGUESSER_H
#define NUMBERGUESSER_H

class NumberGuesser {
    private:
        int lowerBound;
        int upperBound;
        int guess;

    public:
        // Constructors
        NumberGuesser();
        NumberGuesser(int lowerBound, int upperBound);

        // Adjust the range
        void higher();
        void lower();
        int getCurrentGuess();
        void reset();
};

#endif