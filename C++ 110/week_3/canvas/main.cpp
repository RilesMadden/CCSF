// Question 2
// Convert from Fahrenheit to Celsius and determine if freezing
// Riley Madden, CS 110b

#include <iostream>
using namespace std;

bool toCelsiusByReference(float &temperature) {
    
    temperature = (5.0/9.0) * (temperature - 32); // Convert temp to Celsius
    
    if (temperature > 0) { // Return 0 if NOT freezing
        return false; 
    }
    else {
        return true; // Return 1 if freezing
    };
};

int main() {

    float inputTemperature;

    cout << "Welcome to my temperature converter!" << endl;
    cout << "Please enter a temperature in Fahrenheit to convert: ";
    cin >> inputTemperature;
    bool is_freezing = toCelsiusByReference(inputTemperature);
    cout << "The equivalent temperature in Celsius is: " << inputTemperature << endl;

    if (is_freezing) {
        cout << "This temperature is freezing." << endl;
    }
    else {
        cout << "This temperature is not freezing." << endl;
    };  

    return 0;
}

/* Sample output
Welcome to my temperature converter!
Please enter a temperature in Fahrenheit to convert: 30
The equivalent temperature in Celsius is: -1.11111
This temperature is freezing.
*/