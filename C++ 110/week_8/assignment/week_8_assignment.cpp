// Week 8 Assignment
// Practice with C-Strings
// Riley Madden, 110b

#include <iostream>
#include <cstring>
using namespace std;

int lastIndexOf(char *s, char target);
void reverse(char *s);
int replace(char *s, char target, char replacementChar);
int findSubstring(char *s, char substring[]);
bool isPalindrome(char *s);
void reverseWords(char *s);

int main(){

    char sample_string[] = "go giants";
    char target = 'a';

    cout << "1. Function returns the last index where the target char can be found in the string. It returns -1 if the target char does not appear in the string." << endl;
    cout << "String entered: " << sample_string << ", target: " << target << endl;
    cout << "Result: " << lastIndexOf(sample_string, target) << endl;

    cout << "2. This function reverses any string that is passed in." << endl;
    cout << "String entered: " << sample_string << endl;
    reverse(sample_string);
    cout << "Result: " << sample_string << endl;
    reverse(sample_string); // Re-reversing to continue using string for subsequent questions

    cout << "3. This function finds all instances of the char target in the string and replaces them with replacementChar.  It also returns the number of replacements that it makes." << endl;
    char replacementChar = 'G';
    target = 'g';
    cout << "String entered: " << sample_string << ", target char: " << target << ", replacement char: " << replacementChar << endl;
    int replacementCount =  replace(sample_string, target, replacementChar);
    cout << "Resulting string: " << sample_string << ", count of letters replaced: " <<  replacementCount << endl;

    cout << "4. This function returns the index in string s where the substring can first be found. It will return -1 if not found." << endl;
    char substring[] = "ant";
    cout << "String entered: " << sample_string << ", target substring: " << substring << endl;
    cout << "Result: " << findSubstring(sample_string, substring) << endl;

    char palindromeString[] = "racecar";
    cout << "5. This function returns true if the argument string is a palindrome." << endl;
    cout << "String entered: " << palindromeString << endl;
    cout << "Result: " << isPalindrome(palindromeString) << endl;

    char reverseString[] = "The Giants have won the Pennant!";
    cout << "6. This function should reverse the words in a string." << endl;
    cout << "String entered: " << reverseString << endl;
    cout << "Result: " << endl;
    reverseWords(reverseString);
    return 0;

}

int lastIndexOf(char *s, char target) { // 1. Returns the last index where the target char can be found in the string. It returns -1 if the target char does not appear in the string.
    int last_index = -1;
    for (int i = strlen(s); i > 0; i--) {
        if (s[i] == target) {
            last_index = i;
            break;
        }
    }
    return last_index;
}

void reverse(char *s) { // 2. Reverses any string that is passed in.
    int length = strlen(s);
    char temp;
    // loop through the string, swapping the first and last letters before moving the lower index forward and upper index backward
    for (int i = 0; i < (length/2); i++)  {
        temp = s[i];
        s[i] = s[length-i-1];
        s[length-i-1] = temp;
    }
}

int replace(char *s, char target, char replacementChar) {
    int count = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == target) {
            s[i] = replacementChar;
            count += 1;
        }
    }
    return count;
}

int findSubstring(char *s, char substring[]) { // This function returns the index in string s where the substring can first be found.
    int index = -1;
    int subLength = strlen(substring);
    int strLength = strlen(s);
    int j = 0;

    for (int i = 0; i < (strLength - subLength); i++) {
        for (j = 0; j < subLength; j++) { // checks if char in the string passed is the same as the starting letter of the substring, continues checking if so
            if (s[i + j] != substring[j]) {
                break;
            }
        }
        if (j == subLength) { // if the loop made it all the way through to the length of substring, we know it's matched completely
            index = i;
            break;
            }
    }
    return index;
}

bool isPalindrome(char *s) {
    int length = strlen(s);
    bool palindrome = true;
    for (int i = 0; i < length/2; i++) {
        if (s[i] != s[length-1-i]) {
            palindrome = false;
        }
    }
    return palindrome;
}

void reverseWords(char *s) {
    int length = strlen(s);
    int indexCounter = 0;
    int lastSpace;
    // {1,2,3, ,4,5}
    cout << '"';
    for (int i = (length-1); i>-1; i--) {
        if (s[i] == ' '){
            for (int j = i; j < i + indexCounter; j++) {
                cout << s[j+1];
            }
            cout << ' ';
            indexCounter = 0;
            lastSpace = i;
        }
        else if (i == 0) {
            for (int k = 0; k < lastSpace; k++) {
                cout << s[k];
            }
        }
        else {
            indexCounter += 1;
        }
    }
    cout << '"';
}
/*
1. Function returns the last index where the target char can be found in the string. It returns -1 if the target char does not appear in the string.
String entered: go giants, target: a
Result: 5
2. This function reverses any string that is passed in.
String entered: go giants
Result: stnaig og
3. This function finds all instances of the char target in the string and replaces them with replacementChar.  It also returns the number of replacements that it makes.
String entered: go giants, target char: g, replacement char: G
Resulting string: Go Giants, count of letters replaced: 2
4. This function returns the index in string s where the substring can first be found. It will return -1 if not found.
String entered: Go Giants, target substring: ant
Result: 5
5. This function returns true if the argument string is a palindrome.
String entered: racecar
Result: 1
6. This function should reverse the words in a string.
String entered: The Giants have won the Pennant!
Result:
"Pennant! the won have Giants The"
*/

