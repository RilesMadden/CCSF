// main.cpp

#include <iostream>
#include "Player.h"
#include "BasketballPlayer.h"
#include "BaseballPlayer.h"
using namespace std;

int main() {

    Player *p;
    BasketballPlayer pointGuard("Magic Johnson", 220, 2.06, 6211, 11951); // https://www.espn.com/nba/player/stats/_/id/2334/magic-johnson
    BaseballPlayer outfielder("Barry Bonds", 185, 1.85, 9847, 2935); // https://www.baseball-reference.com/players/b/bondsba01.shtml

    p = &pointGuard;
    p -> printStats();
    p = &outfielder;
    p -> printStats();

    return 0;
}

/*
Output:
Magic Johnson
Weight: 220 lbs Height: 2.06m
FG: 6211 Attempts: 11951 Pct: 0.519705
Barry Bonds
Weight: 185 lbs Height: 1.85m
At Bats: 9847 Hits: 2935 Batting Average: 0.29806
*/