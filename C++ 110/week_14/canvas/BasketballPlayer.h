// BasketballPlayer.h

#ifndef BASKETBALLPLAYER_H
#define BASKETBALLPLAYER_H
#include <iostream>
#include <string>
#include "Player.h"
#include <iomanip>
using namespace std;

class BasketballPlayer : public Player {
    private:
        int fieldgoals;
        int attempts;
    public:
        BasketballPlayer(string n, double w, double h, int fg, int a) : Player(n, w, h) {
            fieldgoals = fg;
            attempts = a;
        }
        void printStats() const {
            cout << name << endl;
            cout << "Weight: " << weight << " lbs";
            cout << " Height: " << height << "m" << endl;
            cout << "FG: " << fieldgoals;
            cout << " Attempts: " << attempts;
            cout << " Pct: " << fixed << setprecision(3) << (double) fieldgoals / attempts << endl;
        }
};

#endif