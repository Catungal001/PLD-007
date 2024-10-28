#include <iostream>
using namespace std;

int main()
{
	int dayNumber;
	string days[] = {"Sunday" , "Monday", "Tuesday", "Wednesday" , "Thursday", "Friday", "Saturday"};
	
	cout<< "Enter a day number (0-6):" ;
	cin>> dayNumber;
	
	if (dayNumber >= 0 && dayNumber < 7)
    {
    	cout<< "The day is:" <<days[dayNumber]
    	<<endl;
	}
	else
	{
		cout<< "Error, no such day."
		<<endl;
	}
	return 0;
 
}
