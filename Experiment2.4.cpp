#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	cout << "*** COUNTING NUMBERS ***" << endl;
	cout << endl << endl;
	
	int x;
	cout << "Counting..." << endl;
	
	for (x = 1; x <= 30; x++)
	{
		if (x <= 10)
		{
			cout << x << ", ";
		}
		if (x > 10 && x <= 30)
		{
			if (x%2 == 0)
			{
				if (x == 30)
				{
				cout << x << ".";
				break;		
				}
				
				cout << x << ", ";
				
			}
		
		}
	}
	
	getch ();
	return 0;
}
