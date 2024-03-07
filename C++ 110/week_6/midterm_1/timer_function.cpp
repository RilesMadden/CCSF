// Midterm 1
#include <iostream>
using namespace std;

void sleepytime(){
    cout << "1 second passed" << endl;
}

void ringAlarm(){
    cout << "alarm!" << endl;
}

void timer(int num){
    cout << num << ":" << 0 << endl;
    sleepytime();
    for (int i = (num-1); i >= 0; i--) {
        for (int j = 59; j >= 0; j--) {
            cout << i << ":" << j << endl;
            sleepytime();
        }
    }
    ringAlarm();
}

int main(){

    int num = 2;
    timer(num);
    return 0;
}

/*
Write a function which takes one parameter int num, and prints out a countdown timer with minutes and seconds separated by a colon (:).  It should print out one line for each second elapsed and then pause one second before printing out the next line.  After it has done all of this, it should call a special function ringAlarm() to sound an alarm. A few things to note:
- You can assume that calling the function sleepytime() makes the program pause for one second
- You can assume that calling the function ringAlarm() makes the program sound an alarm
- It should count down from num minutes:zero seconds to zero minutes:zero seconds

- Your function must have the following signature:

void timer(int num)

You do not need to demonstrate calling this function from main().

You don't need to format the output nicely; the below is acceptable output for calling this function when num is 10:
10:0
9:59
9:58
//…and so on, all the way down to:
9:1
9:0
8:59
8:58
//…and so on, all the way down to:
0:2
0:1
0:0
*/