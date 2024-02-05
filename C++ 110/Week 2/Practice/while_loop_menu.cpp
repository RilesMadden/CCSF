// ask the user to choose between 1 and 2, keep repeating until they choose 2.

#include <iostream>
using namespace std;

int main()
{
    int choice = 1;

    // while (choice != 2)
    // {
    //     cout << "Please enter 1 or 2:" << endl;
    //     cin >> choice;
    // }

    do
    {
        cout << "Please enter 1 or 2:" << endl;
        cin >> choice;
    } while (choice != 2);

    return 0;
}