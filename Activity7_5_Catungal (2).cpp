#include <iostream>
using namespace std;

int main() 
{
    int choice;
    float value1, value2, result;

    do {
        cout<<"Select an option:"<< endl;
        cout<<"1. Area of Circle"<< endl;
        cout<<"2. Area of Rectangle"<< endl;
        cout<<"3. Area of Triangle"<< endl;
        cout<<"4. Area of Square"<< endl;
        cout<<"5. Quit"<< endl;
        cin>> choice;

        switch (choice) 
		{
            case 1:
                cout<<"Enter radius:";
                cin>> value1;
                result = 3.14159 * value1 * value1;
                cout<< "Area of Circle: " << result 
				<<endl;
                break;
            case 2:
                cout<<"Enter length:";
                cin>> value1;
                cout<<"Enter width:";
                cin>> value2;
                result = value1 * value2;
                cout<<"Area of Rectangle:" << result 
				<<endl;
                break;
            case 3:
                cout<<"Enter base:";
                cin>> value1;
                cout<<"Enter height:";
                cin>> value2;
                result = 0.5 * value1 * value2;
                cout<<"Area of Triangle:" << result 
				<<endl;
                break;
            case 4:
                cout<<"Enter side:";
                cin>> value1;
                result = value1 * value1;
                cout<<"Area of Square: " << result 
				<<endl;
                break;
            case 5:
                cout<<"Goodbye! Thank you!"
				<<endl;
                break;
            default:
                cout<<"Invalid option. Please try again." 
				<<endl;
        }

        // Ask if they want to compute another area
        char response;
        cout << "Do you want to compute another area? (y/n): ";
        cin >> response;

        // if user wants to quit, set choice to 5 to exit the loop
        if (response == 'n') 
		{
            choice = 5;
        }
    } while (choice != 5);

    return 0;
}
