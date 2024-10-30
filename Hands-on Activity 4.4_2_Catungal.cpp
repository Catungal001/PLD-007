#include <iostream>
using namespace std;

int main()
{
	char inputChar;
	
	cout<<"Enter a character:";
	cin>> inputChar;
	
	if (inputChar >= 'a' && inputChar <= 'z')
	{
	cout<< inputChar << "is a lowercase."
	<<endl;
	}
	else
	{
		cout<< inputChar << "is not a lowercase letter."
		<<endl;
	}
	
	if (inputChar >= 'A' && inputChar <= 'Z')
	{
	cout<< inputChar << "is an uppercase letter."
	<<endl;
	}
	else
	{
		cout<< inputChar << "is not an uppercase letter."
		<<endl;
	}
	
	if (inputChar >= 'a' && inputChar <= 'z')
	{
		char upperChar = inputChar -32;
		cout<< inputChar << "Converted to uppercase is" << upperChar << "."
		<<endl;
	}
	
	if (inputChar >= 'A' && inputChar <= 'Z')
	{
		char lowerChar = inputChar +32;
		cout<< inputChar << "Converted to lowercase is" << lowerChar << "."
		<<endl;
	}
	
	if (inputChar >= 'A' && inputChar <= 'Z')
	{
		char lowerChar = inputChar +32;
		cout<< inputChar << "Converted to lowercase is" << lowerChar << "."
		<<endl;
    } 
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
}
