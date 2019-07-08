#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	cout << "*** FIBONACCI ***" << endl;
	cout <<  endl << endl;
	
	int a, b = 0, c =1, d;
	cout << "Fibonacci Numbers: " << endl;
	
	for (a=0; a < 22; a++)
	{
		if (b == 10946)
		{
			cout << b << ".";
			break;
		}
		
		cout << b << ", ";
		d =  b+c;
		b=c;
		c=d;
	
	}
	
	getch();
	return 0;
}


