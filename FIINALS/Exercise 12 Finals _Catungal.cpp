#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	string str="123";
	int num = atoi (str.c_str()); //Convert string to integer
	cout<<"Coverted number:"<<num<<endl;
	
	return 0;
}
