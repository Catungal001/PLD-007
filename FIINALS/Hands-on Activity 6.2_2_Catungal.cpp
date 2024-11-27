#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double side1, double side2)
{
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

int main()
{
    double side1;
    double side2;

    cout<<"Enter the first side of the triangle:";
    cin>>side1;
    cout<<"Enter the second side of the triangle:";
    cin>>side2;

    cout<<"The hypotenuse of the triangle is:" << hypotenuse(side1, side2) 
	<<endl;

    return 0;
}
