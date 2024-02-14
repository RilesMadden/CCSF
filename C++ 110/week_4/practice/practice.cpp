// Practice
#include <iostream>
#include <string>
using namespace std;

int main() {
    int total_sum = 0;
    int numbers[10] = {1, 2, 3, 4, 55, 6, 7, 8, 9, 10};

    for (int num : numbers) {
        total_sum += num;
    };

    cout << total_sum << endl;
            

    return 0;
}
