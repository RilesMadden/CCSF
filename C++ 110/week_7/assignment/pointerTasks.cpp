// Week 7 - Assignment pt. 1
// Pointer Tasks
// Riley Madden, CS 110b

#include <iostream>
using namespace std;

void noNegatives(int *x); // Step 11
void swap(int *p1, int *p2); // Step 21

int main() {
    int x, y; // 1. Create two integer variables named x and y
    int *p1; // 2. Create an int pointer named p1

    p1 = &x; // 3. Store the address of x in p1
    *p1 = 99; // 4. Use p1 to set the value of x to 99
    cout << "Value of x: " << x << endl; // 5. Using cout and x, display the value of x
    cout << "Value of x (using p1): " << *p1 << endl; // 6. Using cout and the pointer p1, display the value of x

    p1 = &y; // 7. Store the address of y into p1
    *p1 = -300; // 8. Use p1 to set the value of y to -300

    cout << "Value of y: " << y << endl; // 5. Using cout and x, display the value of x
    cout << "Value of y (using p1): " << *p1 << endl; // 6. Using cout and the pointer p1, display the value of x

    int temp, *p2; // 9. Create two new variables: an int named temp, and an int pointer named p2

    p2 = &x; // 10. Use temp, p1, and p2 to swap the values in x and y (this will take a few statements)
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "Value of x after swap: " << x << endl;
    cout << "Value of y after swap: " << y << endl;

    noNegatives(p1); // 12. Call the function twice: once with the address of x as the argument, and once with the address of y
    noNegatives(p2);

    p2 = &x; // 13. Use p2 to display the values in x and y (this will require both assignment statements and cout statements)
    cout << "Value of x after noNegatives: " << *p2 << endl;
    p2 = &y;
    cout << "Value of y after noNegatives: " << *p2 << endl;

    int a[2]; // 14. Create an int array with two elements. The array should be named ‘a’

    p2 = &x; // 15. Use p2 to initialize the first element of a with the value of x
    a[0] = *p2;

    p2 = &y; // 16. Use p2 to initialize the second element of a with the value of y
    a[1] = *p2;
    
    cout << "First element of a: " << a[0] << endl; // 17. Using cout, display the address of the first element in a
    cout << "Second element of a: " << a[1] << endl; // 18. Using cout, display the address of the second element in a

    // 19. Use p1, p2, and temp to swap the values in the two elements of array ‘a’.
    p1 = &a[0]; 
    p2 = &a[1];
    temp = *p2;
    *p2 = *p1;
    *p1 = temp;

    // 20. Display the values of the two elements. (The first element should be 99, the second 0).
    cout << "First element of a after swap: " << a[0] << endl;
    cout << "Second element of a after swap: " << a[1] << endl;

    // 22. Call your swap function with the addresses of x and y, then print their values. (x should be 99, y should be 0).
    p1 = &x;
    p2 = &y;
    swap(*p1, *p2);
    cout << "Value of x after swap: " << x << endl;
    cout << "Value of y after swap: " << y << endl;

    // 23. Call your swap function with the address of the two elements in array ‘a’, then print their values. (a[0] should be 0, a[1] should be 99)
    p1 = &a[0];
    p2 = &a[1];
    swap(*p1, *p2);
    cout << "First element of a after swap: " << a[0] << endl;
    cout << "Second element of a after swap: " << a[1] << endl;    

    return 0;
}

// 11. Write a function with the following signature: void noNegatives(int *x). The function should accept the address of an int variable. If the value of this integer is negative then it should set it to zero.  Note: you should declare the noNegatives function BEFORE main, not inside of main.
void noNegatives(int *x) { 
    if (*x < 0) {
        *x = 0;
    }
}

// 21. Write a function named ‘swap’ that accepts two integer pointers as arguments, and then swaps the two integers that the pointers point to.  This function must be pass by pointer, i.e. int *, not pass by reference, i.e. int &.  Note: you should declare the swap function BEFORE main, not inside of main.
void swap(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
