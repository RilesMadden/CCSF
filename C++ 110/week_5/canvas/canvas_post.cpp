// Week 5 Canvas Post
// Question 2 - Name Detection
// Takes a file containing names, prompts user to input a name. Program determines determine if name is present in the file.
// Riley Madden, 110b

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX_NAME_COUNT = 20;
void sortArray(string array[], int length);
bool nameSearch(const string array[], int length, string value);

int main(){
    ifstream inputFile;
    string name_list[MAX_NAME_COUNT]; // array to hold names
    string user_name; // name which user inputs
    bool name_found;
    bool go_again = true;
    char again = 'y';

    // open file and enter all names into an array
    inputFile.open("names.txt");
    if (!inputFile.is_open()) { // error handling if file cannot be read
    cout << "Error opening file!" << endl;
    return 1;
}
    for (int i = 0; i < MAX_NAME_COUNT; i++) {
        inputFile >> name_list[i];
    }
    inputFile.close();

    // sort array alphabetically
    sortArray(name_list, MAX_NAME_COUNT);

    do {
        // capture name from user
        cout << "Please enter the name to check: ";
        cin >> user_name;

        // determine if name is on list and inform user
        name_found = nameSearch(name_list, MAX_NAME_COUNT, user_name);

        if (name_found) {
            cout << "Name is on list." << endl;
        }
        else {
            cout << "Name is not on list." << endl;
        }

        // prompt user to repeat search
        cout << "Would you like to enter another name (y/n)?: ";
        cin >> again;
        if (again == 'n') {
            go_again = false;
        }
        else {
            name_found = false;
        }
    } while (go_again == true);
    
    cout << "Thank you for searching." << endl;
    return 0;
}

void sortArray (string array[], int length) { // bubble sort the name array
    bool swapped; // set swapped true if any swap occurs
    do {
        swapped = false;
        for (int i = 0; i < (length - 1); i++) {
            if (array[i] > array[i + 1]) {
                swap(array[i], array[i + 1]);
                swapped = true;
            }
        }
    } while(swapped);
}

bool nameSearch(const string array[], int length, string value) { // search for name in array using binary search
    int first = 0, // first array element
        last = length - 1, // last array element
        middle, // midpoint of search
        position = -1; // position of search value
    bool found = false;

    while (found == false && first <= last) {
        middle = (first + last) / 2; // calculate midpoint
        if (array[middle] == value) { // check if midpoint = value, end search if true
            found = true;
            position = middle;
            break;
        }
        else if (array[middle] > value) { // if value is in lower half
        last = middle - 1;
        }
        else { // if value is in upper half
            first = middle + 1;
        }

    }
    return found;
}

/*
Sample output:

Please enter the name to check: Riley
Name is not on list.
Would you like to enter another name (y/n)?: y
Please enter the name to check: Jones
Name is on list.
Would you like to enter another name (y/n)?: y
Please enter the name to check: Lee
Name is on list.
Would you like to enter another name (y/n)?: n
Thank you for searching.
*/