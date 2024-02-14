// Week 4 Discussion
// Question 2 - Taqueria
// Prompt user for a list of burritos and determine if a shrimp burrito is present
// Riley Madden, CS110b

#include <iostream>
#include <string>
using namespace std;

// Determines if a shrimp burrito exists among the array 
bool contains_shrimp(string list_of_burritos[], int burrito_count) {
    bool shrimp = false;
    for (int i; i < burrito_count; i++) {
        if (list_of_burritos[i] == "shrimp") {
            shrimp = true;
            break; // Can break after one instance of shrimp
        }
    }
    return shrimp;
}

int main(){

    // Prompt user for number of burritos
    int number_of_burritos;
    cout << "Welcome to our burrito stand!" << endl;
    cout << "Please enter the number of burritos: ";
    cin >> number_of_burritos;

    // Prompt user to enter the type of each burrito
    string burrito_list[number_of_burritos]; 
    for (int i = 0; i < number_of_burritos; i++) {
        cout << "Please enter burrito " << (i+1) << ": ";
        cin >> burrito_list[i];
    }

    // Determine if shrimp is among the orders
    if (contains_shrimp(burrito_list, number_of_burritos)) {
        cout << "There's a shrimp burrito in the order!" << endl;
    }
    else {
        cout << "No shrimps here!" << endl;
    }

    cout << "Thanks for the order!" << endl;
    return 0;
}



/*
Sample outputs:

Welcome to our burrito stand!
Please enter the number of burritos: 3
Please enter burrito 1: carnitas
Please enter burrito 2: vegetarian
Please enter burrito 3: beef
No shrimps here!
Thanks for the order!

Welcome to our burrito stand!
Please enter the number of burritos: 3
Please enter burrito 1: shrimp
Please enter burrito 2: beef
Please enter burrito 3: carnitas
There's a shrimp burrito in the order!
Thanks for the order!
*/