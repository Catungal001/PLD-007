#include <iostream>
using namespace std;

int main() {
    
	int x = 4, y = 2, sum = 0, product = 0, difference = 0, remainder = 0;
	float quotient = 0;
	
	//Formula
	sum = x + y;
	product = x * y;
	difference = x - y;
	remainder = x % y;
	quotient = x / y;
	
	//Printing results
	cout << "sum = " << sum << endl;
	cout << "product = " << product << endl;
	cout << "difference = " << difference << endl;
	cout << "remainder = " << remainder << endl;
	cout << "quotient = " << quotient << endl;

    cout << "Algorithm to get the sum, difference, product, quotient, remainder  of two \n " << endl; 
	

	return 0;	
}

