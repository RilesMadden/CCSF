// Assignment 1 - Ages
// Asks a user to input their age, program will determine if they are a child, teen, adult, or retiree.
// Riley Madden, CS110B

#include <iostream>
using namespace std;

int main(){

    int user_age;

    // Obtain user age
    cout << "Please enter your age:\n";
    cin >> user_age;

    // Determine if child, teen, adult, or retiree
    // child: 0-12, teen: 13-17, adult: 18-64, retiree: 65+
    if (0 <= user_age && user_age <= 12)
        cout << "You are a child.";
    else if (13 <= user_age && user_age <= 17)
        cout << "You are a teen.";
    else if (18 <= user_age && user_age <= 64)
        cout << "You are an adult.";
    else if (user_age >= 65)
        cout << "You are a retiree.";
    else
        cout << "Please retry and enter a valid number (a positive integer).";

    cout << "\n";
    return 0;
}

/*
Sample output:
Please enter your age:
37
You are an adult.

Please enter your age:
16
You are a teen.
*/