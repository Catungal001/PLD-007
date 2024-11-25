#include <iostream>
using namespace std;

int main() 
{
	
    float dollars, pesos;
    char choice;

    cout << "Please enter D for Dollars to Pesos, or P for Pesos to Dollars: ";
    cin >> choice;

    if (choice == 'D' || choice == 'd') 
	{
        cout << "Please enter amount in Dollars: ";
        cin >> dollars;
        pesos = dollars * 55; // Assuming a conversion rate of 1 USD = 55 PHP
        cout << "The amount in Pesos is...: " << pesos << endl;
    } 
	else if (choice == 'P' || choice == 'p') 
	{
        cout << "Please enter amount in Pesos: ";
        cin >> pesos;
        dollars = pesos / 55;
        cout << "The amount in Dollars is...: " << dollars <<endl;
    } 
	else 
	{
        cout << "Invalid choice" << endl;
    }

    return 0;
}


