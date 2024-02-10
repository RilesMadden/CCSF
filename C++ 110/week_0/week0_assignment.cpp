// Assignment 0: Riley Madden
// This program prints out as many asterisks as the user wants.

#include <iostream>
using namespace std;

int main()
{
    int count;
    char retry = 'y';
    while (retry != 'n')
    {
        cout << "How many asterisks would you like to print?: ";
        cin >> count;
        for (int i = 0; i < count; i++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "Would you like to try again? (y/n): ";
        cin >> retry;

    }
    cout << "Thanks for playing!";
    cout << "\n\n";
    return 0;
}
/*
Sample Output:
[rmadden3@hills week0]$ ./a.out
How many asterisks would you like to print?: 2
**
Would you like to try again? (y/n): y
How many asterisks would you like to print?: 5
*****
Would you like to try again? (y/n): n
Thanks for playing!
*/