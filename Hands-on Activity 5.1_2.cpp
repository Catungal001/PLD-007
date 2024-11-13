#include <iostream>
using namespace std;

bool isMultiple(int num, int x) {
return num % x == 0;
}

int main () {
int num, x;
cout << "Enter a number: ";
cin >> num;
cout << "Enter another number: ";
cin >> x;


cout << num << (isMultiple(num, x) ? " is a Multiple of " : " is not a Multiple ") << x <<endl;
return 0;
}

