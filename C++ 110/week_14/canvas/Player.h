// Player.h
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;

class Player {
    protected:
        string name;
        double weight;
        double height;
    public:
        Player(string n, double w, double h) {
            name = n;
            weight = w;
            height = h;
        }
        virtual void printStats() const = 0;
};

#endif