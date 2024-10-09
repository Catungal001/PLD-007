#include <iostream>
using namespace std;
int main() 
{
    double totalMiles = 0;
    double totalGallons = 0;
    int count = 0;

    cout << "Enter gallons used and miles driven. Enter -1 to quit.\n";

    while (true) {
        double gallons;
        cout << "Gallons: ";
        cin >> gallons;

        if (gallons == -1) break;

        double miles;
        cout << "Miles: ";
        cin >> miles;

        cout << "MPG: " << miles / gallons << endl;

        totalMiles += miles;
        totalGallons += gallons;
        count++;
    }

    if (count > 0) {
        cout << "\nAverage MPG: " << totalMiles / totalGallons << endl;
    } else {
        cout << "\nNo data to calculate average." << endl;
    }

    return 0;
}
