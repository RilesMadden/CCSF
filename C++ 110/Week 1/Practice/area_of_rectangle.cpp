// Write a program that asks the user for 2 lengths and provides the area
# include <iostream>
using namespace std;

int main()
{
    int x, y, area;

    cout << "Please provide x:\n";
    cin >> x;
    cout << "Please provide y:\n";
    cin >> y;
    area = x * y;
    cout << "The area is " << area << ".\n";
    return 0;
}