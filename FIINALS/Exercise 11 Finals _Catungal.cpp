#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int*ptr=(int*) malloc(sizeof(int)); //Dynamicalle allocate memory
	if (ptr!=NULL)
	{
		*ptr=10;
		cout<<"Value:"<<*ptr<<endl;
		free(ptr); //Free allocated memory
	}
	return 0;
}
