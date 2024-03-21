#include <iostream>
#include <cstring>

using namespace std;

int main(){
    const int MAX_CHARS = 128;

    char slogan[MAX_CHARS] = "Go Giants!";

    cout << slogan << endl;
    cout << strlen(slogan) << endl;

    slogan[5] = '\0';
    cout << slogan << endl;
    cout << strlen(slogan) << endl;


    return 0;
}