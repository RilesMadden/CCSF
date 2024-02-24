// sorts array of length n using selection sort algorithm

void selectionSort(int array[], int n) {
    int lowestValue, lowestPosition;
    for (int i = 0; i < n - 1; i++) {
        // first, find position of lowest element in positions i through n - 1
        lowestValue = array[i];
        lowestPosition = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < lowestValue) {
                lowestPosition = j;
                lowestValue = array[j];
            }
        }
        // now, swap the lowest element we found with element at position i
        swapper(array[i], array[lowestPosition]);
    }
}