#include <iostream>
using namespace std;

int main() 
{
    int accountNumber;
    double beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

    while (true) 
	{
        cout << "Enter account number (-1 to end): ";
        cin >> accountNumber;

        if (accountNumber == -1) {
            cout << "Program ends." << endl;
            break;
     }

        cout << "Enter beginning balance: ";
        cin >> beginningBalance;
        cout << "Enter total charges: ";
        cin >> totalCharges;
        cout << "Enter total credits: ";
        cin >> totalCredits;
        cout << "Enter credit limit: ";
        cin >> creditLimit;

        // Calculate new balance
        newBalance = beginningBalance + totalCharges - totalCredits;

        // Display account information
        cout << "\nAccount: " << accountNumber << endl;
        cout << "Credit limit: " << creditLimit << endl;
        cout << "Balance: " << newBalance << endl;

        // Check if credit limit is exceeded
        if (newBalance > creditLimit) {
            cout << "Credit limit exceeded." << endl;
        }
    }

    return 0;
}

