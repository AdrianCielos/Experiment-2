#include <iostream> 
#include <conio.h> 
using namespace std; 

int main () 
{ 
	cout << "*** SUMMATION ***" << endl; 
	cout << endl << endl; 

	cout << "Please Enter a VALID Number only." << endl; 
	cout << endl; 
 
	//INPUT OF VARIABLE
	int x, y; 
	for (y =1; y != 0; y++) 
	{	 
	
	cout << "Enter Desired Number: "; cin >> y;
	
	//IF STATEMENT TO END THE LOOP
	if(y<=0)
		{
		cout << "POSITIVE INTEGERS ONLY! THANK YOU." << endl;
		break;
		}
	
	//ARITHMETIC TO GET THE SUMMATION OF THE VARIABLE
	int z=0;
	for (x =1 ; x <= y; x++) 
		{ 
		z += x;
		} 
		cout << "The SUM of all whole numbers from 1 to " << y << " is " << z << "." << endl;

	} 
	

	
	getch ();
	return 0; 
}
