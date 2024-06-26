//  NumberGuesser.h

#ifndef NUMBERGUESSER_H
#define NUMBERGUESSER_H

#include <iostream>

class NumberGuesser {
  protected:
    int low;
    int originalLow;
    int high;
    int originalHigh;
    
  public:
    NumberGuesser(int l, int h) {
        low = originalLow = l; high = originalHigh = h;
    }
    
    virtual int getCurrentGuess() {
        return (high + low) / 2;
    }
    
    virtual void higher() {
        low = getCurrentGuess() + 1;
    }
    
    virtual void lower() {
        high = getCurrentGuess() - 1;
    }
    
    virtual void reset() {
        low = originalLow; high = originalHigh;
    }
};

#endif