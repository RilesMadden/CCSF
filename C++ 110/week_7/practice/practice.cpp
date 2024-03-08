#include <iostream>
using namespace std;

int main(){

    int cards[4] = {7,3,4,5};

    cout << "First card: " << *cards;
    cout << "Second card: " << *(cards+1);

    return 0;

}