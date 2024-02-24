// sorts array of length n using bubblesort algorithm
#include <iostream>
using namespace std;

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

void sortArrayDesc (int array[], int n) {
    bool swapped; // set swapped true if any swap occurs

    do {
        swapped = false;
        for (int i = 0; i < (n - 1); i++) {
            if (array[i] < array[i + 1]) {
                swap(array[i], array[i + 1]);
                swapped = true;
            }
        }
    } while(swapped);
}

int main(){
    int int_list[5] = {4,3,5,2,1};
    
    sortArrayAsc(int_list, 5);

    for (int i = 0; i < 5; i++){
        cout << int_list[i];
    }

    sortArrayDesc(int_list, 5);

    for (int i = 0; i < 5; i++){
        cout << int_list[i];
    }

    return 0;
}