#include <iostream>
using namespace std;

int main()
{

    int choice;
    float value;

    while (true) 
	{
        cout << "Conversion Menu:" << endl;
        cout << "1. cm - inches" << endl;
        cout << "2. inches - cm" << endl;
        cout << "3. feet - meter" << endl;
        cout << "4. meter - feet" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << "Enter a value: ";
        cin >> value;

        switch (choice) {
            case 1: value /= 2.54; cout << value << " inches"; break;
            case 2: value *= 2.54; cout << value << " cm"; break;
            case 3: value /= 3.2808; cout << value << " meters"; break;
            case 4: value *= 3.2808; cout << value << " feet"; break;
            default: cout << "Invalid choice"; break;
        }

    }
     
    return 0;
}
