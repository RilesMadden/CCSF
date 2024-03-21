// Week 8 Canvas Post
// Write a function to determine if a C-string begins with a specified prefix.
// Riley Madden, 110b

#include <iostream>
#include <cstring>
using namespace std;

bool starts(char *str, char *prefix);

int main() {

    char str[] = "airplanes";
    char prefix[] = "air";

    if (starts(str, prefix)) {
        cout << "The string does begin with the prefix!" << endl;
    }
    else {
        cout << "The string does not begin with the prefix." << endl;
    }
    return 0;
}

bool starts(char *str, char *prefix) {
    bool containsPrefix = true;
    int strLength = strlen(str);
    int prefixLength = strlen(prefix);
    if (prefixLength > strLength) {
        containsPrefix = false;
    }
    else {
        for (int i = 0; i < prefixLength; i++) {
            if (prefix[i] != str[i]) {
                containsPrefix = false;
                break;
            }
        }
    }
    return containsPrefix;
}

/*
Sample output for:
char str[] = "airplanes";
char prefix[] = "air";

The string does begin with the prefix!

char str[] = "airplanes";
char prefix[] = "air plane";

The string does not begin with the prefix.
*/