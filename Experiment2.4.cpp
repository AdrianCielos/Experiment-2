#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	cout << "*** COUNTING NUMBERS ***" << endl;
	cout << endl << endl;
	
	int x;
	cout << "Counting..." << endl;
	
	//ARITHMETIC TO OUTPUT COUNTING NUMBERS TO 30
	for (x = 1; x <= 30; x++)
	{
		//ARITHMETIC TO OUTPUT COUNTING NUMBERS TO 10
		if (x <= 10)
		{
			cout << x << ", ";
		}
		//ARITHMETIC TO OUTPUT COUNTING NUMBERS FROM 12 TO 30
		if (x > 10 && x <= 30)
		{
			//FORMULA TO GET EVEN NUMBERS UP TO 30
			if (x%2 == 0)
			{
				//FORMULA TO HAVE PERIOD AT THE END
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
