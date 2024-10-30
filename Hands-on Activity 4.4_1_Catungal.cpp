#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	char ch;
	ch = 'p' ;
	cout<< ch << " is a lowercase letter\n";
	ch = 'P';
	cout<< ch << " is not a lowercase letter\n";
	ch = '5';
	cout<< ch << " is not a lowercase letter\n";
	ch = '!';
	cout<< ch << " is not a lowercase letter\n\n";
	//According to isupper
	ch = 'D';
	cout<< ch << " is an uppercase letter\n";
	ch = 'd';
	cout<< ch << " is not an uppercase letter\n";
	ch = '8';
	cout<< ch << " is not an uppercase letter\n";
	ch = '&';
	cout<< ch << " is not an uppercase letter\n\n";
	
	ch = 'u';
	cout<< ch << " coverted to uppercase is " <<('U')
	<<endl;
	ch = '7';
	cout<< ch << " coverted to uppercase is " <<('7')
	<<endl;
	ch = '$';
	cout<< ch << " coverted to uppercase is " <<('$')
	<<endl;
	ch = 'L';
	cout<< ch << " coverted to uppercase is " <<('l')
	<<endl;
	
return 0;
	
	
	
	
	
	
	
	
	
} 
