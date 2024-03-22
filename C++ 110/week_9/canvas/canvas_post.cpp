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
void printReport(SalesRecord* records, int size);


int main() {

    cout << "Welcome to the daily Taqueria profit report." << endl;
    // Prompt user for number of types
    int numTypes;
    cout << "How many types of burritos will you be entering?: ";
    cin >> numTypes;

    SalesRecord* burritos = new SalesRecord[numTypes]; 
 
    // Prompt user to enter name, number sold, wholesale, and retail cost of each
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

    printReport(burritos, numTypes);

    delete[] burritos;
    cout << "Have a nice day!" << endl;
    return 0;
}

float getProfit(SalesRecord record) {
    float unitProfit = record.pricing.retail - record.pricing.wholesale;
    float totalProfit = unitProfit * record.numSold;
    return totalProfit;
}

void printReport(SalesRecord* records, int size) {
    int totalBurritos = 0;
    float totalProfit = 0;
    for (int i = 0; i < size; i++) {
        float profit = getProfit(records[i]);
        cout << records[i].numSold << " " << records[i].burritoType << " burritos were sold today for a profit of $" << profit << endl;
        totalBurritos += records[i].numSold;
        totalProfit += profit;
    }
    cout << "A total of " << totalBurritos << " were sold today, for an overall profit of $" << totalProfit << endl;
}

/* Sample output:
Welcome to the daily Taqueria profit report.
How many types of burritos will you be entering?: 4
Please enter the name of burrito#1: Steak
Please enter the number of Steak burritos sold: 20
Please enter the wholesale cost of the Steak burrito: 3
Please enter the retail cost of the Steak burrito: 6
Please enter the name of burrito#2: Chicken
Please enter the number of Chicken burritos sold: 15
Please enter the wholesale cost of the Chicken burrito: 2
Please enter the retail cost of the Chicken burrito: 5
Please enter the name of burrito#3: Carnitas
Please enter the number of Carnitas burritos sold: 30
Please enter the wholesale cost of the Carnitas burrito: 4
Please enter the retail cost of the Carnitas burrito: 7
Please enter the name of burrito#4: Vegetarian
Please enter the number of Vegetarian burritos sold: 10
Please enter the wholesale cost of the Vegetarian burrito: 1.5
Please enter the retail cost of the Vegetarian burrito: 3
20 Steak burritos were sold today for a profit of $60
15 Chicken burritos were sold today for a profit of $45
30 Carnitas burritos were sold today for a profit of $90
10 Vegetarian burritos were sold today for a profit of $15
A total of 75 were sold today, for an overall profit of $210
Have a nice day!
*/