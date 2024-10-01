#include <iostream>
using namespace std;

int main() 
{

    int daysInJanuary = 31;

    int daysInFebruary = 29; // or 28 for non-leap years

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


    int daysInFirstHalf = daysInJanuary + daysInFebruary + daysInMarch + daysInApril + daysInMay + daysInJune;

    int daysInSecondHalf = daysInJuly + daysInAugust + daysInSeptember + daysInOctober + daysInNovember + daysInDecember;


    cout << "Days in the first half of the current year: " << daysInFirstHalf << endl;

    cout << "Days in the second half of the current year: " << daysInSecondHalf << endl;

    cout << "Days in the current year: " << daysInFirstHalf + daysInSecondHalf << endl;


    return 0;

}