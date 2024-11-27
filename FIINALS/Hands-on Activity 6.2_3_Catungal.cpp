#include <iostream>
#include <cmath>
using namespace std;


double celsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

double fahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}

int main()
{
    cout << "Celsius to Fahrenheit | Fahrenheit to Celsius" 
	<<endl;
    cout << "---------------------------------------------" 
	<<endl;
    cout << "---------------------------------------------" 
	<<endl;

    for (int c = 0, f = 32; c <= 100 || f <= 212; c++, f++)
    {
        if (c <= 100)
            cout << "C: " << c << " to F: " << round(fahrenheit(c) * 100) / 100;
        else
        cout << "                  ";
        cout << "       |           ";

        if (f <= 212)
    cout<<"F:" << f << " to C: " << round(celsius(f) * 100) / 100;
        cout<<endl;
    }

    return 0;
}
