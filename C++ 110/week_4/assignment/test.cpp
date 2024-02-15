#include <iostream>
using namespace std;


bool containsPair(int hand[]) {
    bool pair = false;
    for (int card : hand) {
        if (card >= 2) {
            pair = true;
            break;
        }
    }
    return pair;
}

int main(){
    int test_list[3] = {0,0,0};
    for (int &i : test_list) {
        cout << i << endl;
    }

    cout << containsPair(test_list) << endl;
    return 0;
}