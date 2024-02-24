// sorts array of length n using bubblesort algorithm

void sortArray (int array[], int n) {
    bool swapped; // set swapped true if any swap occurs

    do {
        swapped = false;
        for (int i = 0; i < (n - 1); i++) {
            if (array[i] > array[i + 1]) {
                swapper(array[i], array[i + 1]);
                swapped = true;
            }
        }
    } while(swapped);
}