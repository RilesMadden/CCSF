// NumberGuesser.h - Rectangle header file
#ifndef HEADER_H
#define HEADER_H
#include <iostream>

class SwimmingPool {
    private:
        int area;
        int gallons;
    public:
    SwimmingPool() { 
        area = gallons = 0;
        std::cout << "In the constructor!\n";
        };
    void setArea(int);
    void setGallons(int);
    int getGallons() const { return gallons; };
};

#endif