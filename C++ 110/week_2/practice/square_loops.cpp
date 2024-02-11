// make a program to ask the user to enter 2 numbers, program will output the square of each whole digit in between the 2 inclusive

#include <iostream>
using namespace std;

int main()
{
    int user_input_1;
    int user_input_2;
    int num;

    // ask user for input 1 & 2
    cout << "What should the first number be?" << endl;
    cin >> user_input_1;
    cout << "What should the second number be?" << endl;
    cin >> user_input_2;

    cout << "Got it, here are the square digits between " << user_input_1 << " and " << user_input_2 << "." << endl;

    for (num = user_input_1; num < user_input_2; num++)
        cout << num << " squared equals " << (num * num) << endl;

    cout << endl;
    return 0;
}