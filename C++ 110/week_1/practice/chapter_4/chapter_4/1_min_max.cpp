// Minimum/Maximum
// Write a program that asks the user to enter two numbers. The program should use the conditional operator to determine which number is the smaller and which is the larger.

#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Please provide first number: ";
    cin >> x;
    cout << "Please provide second number: ";
    cin >> y;

    if (x > y)
        cout << "X is bigger than Y";
    else if (y > x)
        cout << "Y is bigger than X";
    else
        cout << "They are the same number";

    cout << ('\n');
    return 0;
}
