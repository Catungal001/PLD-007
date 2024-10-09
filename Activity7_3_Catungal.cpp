#include <iostream>
using namespace std;

int main() 
{
    int weight;

    cout<<"Please enter the weight of the parcel (in grams):";
    cin>>weight;

    if (weight > 1000) 
	{
    cout<<"Weight exceeds maximum limit of 1000g."
	<<endl;
    return 1;
    }

    if (weight <= 300) {
        cout << "The cost of sending the parcel is P5.00." << endl;
    } else 
	{
        int excessWeight = weight - 300;
        int numUnits = (excessWeight + 99) / 100;
        double cost = 5.00 + (numUnits * 2.00);
        cout << "The cost of sending the parcel is P" << cost << "." << endl;
    }
    return 0;
}  
