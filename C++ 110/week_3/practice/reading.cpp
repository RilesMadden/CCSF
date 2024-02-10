#include <iostream>
using namespace std;

bool is_even(int x){

    if (x % 2 == 0) {
        return true;
    }
    else {
        return false;
    };
}

int main() {

    cout << is_even(3) << endl;
    return 0;
}