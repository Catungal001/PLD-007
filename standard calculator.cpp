#include <iostream>
using namespace std;

int main()
{
	
	//create a c++ program that apply a MDAS
	char c;
	
	cout<<"Enter the Calculator:";
	cin>>c;
	
	switch(c)
	{
		case '+': 
			cout<<"addition";
		break;
		
		case '-':
			cout<<"subtraction";
		break;
		
		case '*':
			cout<<"multiplication";
		break;
		
		case '/':
			cout<<"devision";
		break;
		
	
		     
								
		default:
		   {
		   	  cout<<"not a calculator funtion";
		      break;
		   }	
		
		
		
		
		
	}
	
	
	return 0;
	
	
	

}	
