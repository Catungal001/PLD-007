#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int randomValue= rand();
	cout<<"Ramdom value" <<randomValue<<endl;
	
	return 0;
}
