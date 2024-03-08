// Week 7 - Question#2
// Print daily report of burritos sold
// Riley Madden, 110b

#include <iostream>
#include <string>
using namespace std;

void printReport(string *burritosPtr, int *salesPtr, int numTypes);

int main() {
    // prompt user for number of types of burritos
    int numTypes;
    cout << "How many types of burritos were sold today?: ";
    cin >> numTypes;

    // create dynamic arrays
    string *burritosPtr = new string[numTypes];
    int *salesPtr = new int[numTypes];

    // prompt user for names and sales of each burritos
    for (int i = 0; i < numTypes; i++) {
        cout << "Please enter the name of burrito#" << (i+1) << ": ";
        cin >> burritosPtr[i];

        cout << "Please enter the number of " << burritosPtr[i] << " burritos sold: ";
        cin >> salesPtr[i];
    }

    printReport(burritosPtr, salesPtr, numTypes);

    // delete arrays
    delete[] burritosPtr;
    delete[] salesPtr;

    cout << "Have a nice day!" << endl;
    return 0;      
}

void printReport(string *burritosPtr, int *salesPtr, int numTypes) {

    cout << "Here is your report for today's sales:" << endl;

    int totalSales = 0;

    for (int i = 0; i < numTypes; i++) {
        cout << burritosPtr[i] << ": " << salesPtr[i] << endl;
        totalSales += salesPtr[i];
    }

    cout << "The total number of burritos sold was: " << totalSales << endl;
}




/*
Sample output:
How many types of burritos were sold today?: 3
Please enter the name of burrito#1: pork
Please enter the number of pork burritos sold: 10
Please enter the name of burrito#2: chicken
Please enter the number of chicken burritos sold: 35
Please enter the name of burrito#3: carnitas
Please enter the number of carnitas burritos sold: 20
Here is your report for today's sales:
pork: 10
chicken: 35
carnitas: 20
The total number of burritos sold was: 65
Have a nice day!
*/