#include <iostream>
#include <string> 

using namespace std;

int main() 
{
    string str1, str2, str3, str4; 
    int num1, num2, num3, num4, total;

    
    cout << "Enter the first integer as a string: ";
    cin >> str1; 
    cout << "Enter the second integer as a string: ";
    cin >> str2; 
    cout << "Enter the third integer as a string: ";
    cin >> str3; 
    cout << "Enter the fourth integer as a string: ";
    cin >> str4; 

    num1 = stoi(str1); 
    num2 = stoi(str2); 
    num3 = stoi(str3); 
    num4 = stoi(str4); 

    total = num1 + num2 + num3 + num4;

    cout << "The total of the four values is:\n " << total 
	<<endl;

    return 0; 
}
