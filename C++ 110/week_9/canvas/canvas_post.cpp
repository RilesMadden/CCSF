// Week 9 Canvas Post
// Question 2 - Daily Report in Taqueria
// Riley Madden, 110b

#include <iostream>
using namespace std;

struct Cost {
    double wholesale;
    double retail;
};

struct SalesRecord {
    string burritoType;
    int numSold;
    Cost pricing;
};

float getProfit(SalesRecord record);


int main() {

    cout << "Welcome to the daily Taqueria profit report." << endl;
    // Prompt user for number of types
    int numTypes;
    cout << "How many types of burritos will you be entering?: ";
    cin >> numTypes;

    SalesRecord burritos[numTypes];

    for (int i = 0; i < numTypes; i++) {
        cout << "Please enter the name of burrito#" << (i+1) << ": ";
        cin >> burritos[i].burritoType;
        cout << "Please enter the number of " << burritos[i].burritoType << " burritos sold: ";
        cin >> burritos[i].numSold;
        cout << "Please enter the wholesale cost of the " << burritos[i].burritoType << " burrito: ";
        cin >> burritos[i].pricing.wholesale;
        cout << "Please enter the retail cost of the " << burritos[i].burritoType << " burrito: ";
        cin >> burritos[i].pricing.retail;
    }


    return 0;
}
/*
The local taqueria wants you to write a program which tracks the number of burritos they sell each day and help them analyze their business.

Your program should ask the user for the number of different burrito types sold, then get the names of the types and the number of burritos sold of each type of that day.  Print out a daily report listing sales for each burrito type and total number of all burritos sold.

So far, this sounds very similar to a previous exercise!  This difference this time is that you must use a struct called SalesRecord which has two fields -- a string containing the name of the burrito, and an int containing the number of burritos sold of this type.  You must have one dynamically allocated array of SalesRecord structs.

Add on to your taqueria program from Question 2 above.  Just like in the videos and pdfs, create a new struct named Cost which contains two doubles: wholesale and retail.  Add one of these to the your SalesRecord struct, so it now has three fields — the name, the number sold, and the Cost struct.  Modify your input loop from Question 1 to input both wholesale and retail costs for each burrito type.

Write a function which takes a SalesRecord as a parameter (by value), and returns the total profit from selling all the burritos of this type (unitProfit = retail - wholesale; totalProfit = unitProfit * numSold).

float getProfit(SalesRecord record);

Write another function which steps through your array of SalesRecords and prints out the total profit for all burritos sold.   You can do this by passing your function a pointer to the first element of your array and the number of elements in the array.  The function can have a loop which will call getProfit() for each SalesRecord.

void printReport(SalesRecord* records, int size);

Demonstrate that your function works by calling printReport() from main().
*/