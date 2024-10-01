#include <iostream>
using namespace std;


int main() 
{

    int daysInJanuary = 31;

    int daysInFebruary = 28; // default to non-leap year

    int daysInMarch = 31;

    int daysInApril = 30;

    int daysInMay = 31;

    int daysInJune = 30;

    int daysInJuly = 31;

    int daysInAugust = 31;

    int daysInSeptember = 30;

    int daysInOctober = 31;

    int daysInNovember = 30;

    int daysInDecember = 31;


    // assume the current year is a leap year if it's divisible by 4

    // but not if it's divisible by 100, unless it's also divisible by 400

    int currentYear = 2024; // replace with the current year

    if ((currentYear % 4 == 0 && currentYear % 100 != 0) || currentYear % 400 == 0) {

        daysInFebruary = 29;

    }


    int daysInQ1 = daysInJanuary + daysInFebruary + daysInMarch;

    int daysInQ2 = daysInApril + daysInMay + daysInJune;

    int daysInQ3 = daysInJuly + daysInAugust + daysInSeptember;

    int daysInQ4 = daysInOctober + daysInNovember + daysInDecember;


    cout << "Days in Q1 of the current year: " << daysInQ1 << endl;

    cout << "Days in Q2 of the current year: " << daysInQ2 << endl;

    cout << "Days in Q3 of the current year: " << daysInQ3 << endl;

    cout << "Days in Q4 of the current year: " << daysInQ4 << endl;


    return 0;

}