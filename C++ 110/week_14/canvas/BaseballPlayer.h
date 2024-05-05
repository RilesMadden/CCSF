// BaseballPlayer.h

#ifndef BASEBALLPLAYER_H
#define BASEBALLPLAYER_H
#include <iostream>
#include <string>
#include "Player.h"

class BaseballPlayer : public Player {
    private:
        int atBats;
        int hits;
    public:
        BaseballPlayer(string n, double w, double h, int atb, int hs) : Player(n, w, h) {
            atBats = atb;
            hits = hs;
        }
        void printStats() const {
            cout << name << endl;
            cout << "Weight: " << weight << " lbs";
            cout << " Height: " << height << "m" << endl;
            cout << "At Bats: " << atBats;
            cout << " Hits: " << hits;
            cout << " Batting Average: " << (double) hits / atBats << endl;
        }
};

#endif