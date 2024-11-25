#include <iostream>
using namespace std;

int main() 
{
    float fahrenheit, celsius;
    char choice;

    cout << "Please enter F for Fahrenheit to Celsius, or C for Celsius to Fahrenheit: ";
    cin >> choice;

    if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << celsius << endl;
    } else if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}


