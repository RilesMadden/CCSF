// Midterm practice

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void sortArrayAsc (int array[], int n);
int findMax(const int array[], int size);

int main() {
// Write a function which takes an array of ints and size of array as parameters, and returns the maximum value in the array.  You do not need to demonstrate calling this function from main().  It must have the following signature:
    int size = 5;
    int num_list[size] = {18, 2, 3, 90000, 1};

    sortArrayAsc(num_list, size);
    int y = findMax(num_list, size);
    cout << y << endl;
    return 0;
}

void sortArrayAsc (int array[], int n) {
    bool swapped; // set swapped true if any swap occurs

    do {
        swapped = false;
        for (int i = 0; i < (n - 1); i++) {
            if (array[i] > array[i + 1]) {
                swap(array[i], array[i + 1]);
                swapped = true;
            }
        }
    } while(swapped);
}

int findMax(const int array[], int size) {
    int n = array[(size-1)];
    return n;
}

// 14. Assume there is a file named "cards.txt" in the current directory which contains 3 ints.  Write a code snippet which reads in the three ints and outputs their average (mean) to the screen.
    // ifstream inputFile;
    // inputFile.open("cards.txt");
    // const int num_count = 3;
    // int num_list[3];
    // float num_sum;
    // for (int i = 0; i < 3; i++) {
    //     inputFile >> num_list[i];
    //     num_sum += num_list[i];
    //     cout << num_list[i] << endl;
    // }

    // float average = num_sum/num_count;
    // cout << average << endl;

    // inputFile.close();

// 16a. Write a function which takes an int array and its size as parameters.  It returns an int indicating how many multiples of 3 are contained in the array.  For example, if the array contains {2, 6, 8} your function should return 1.  If the array contains {3, 10, 5, 6} your function should return 2.  Here is the function prototype:
// int countMult(const int array[], int size) {
//     int mults_of_three = 0;
//     for (int i = 0; i < size; i++) {
//         if (array[i] % 3 == 0) {
//             mults_of_three += 1;
//         }
//     }
//     return mults_of_three;
// }
    // const int n = 5;
    // int num_list[n] = {1,3,5,7,9};

    // int y = countMult(num_list, n);
    // cout << y << endl;


// Assume the 2D array below has been assigned valid integer values.  NUM_PLAYERS and NUM_CARDS are global const ints with positive values.  Write a code snippet which computes the total of all the elements in the 2D array.
    // int num_sum = 0;
    // int cards[NUM_PLAYERS][NUM_CARDS];

    // for (int i = 0; i < NUM_PLAYERS; i++) {
    //     for (int j = 0; j < NUM_CARDS; j++) {
    //         num_sum += cards[i][j]
    //     }
    // }

    // cout << num_sum << endl;