#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main ()
{
	cout << "*** FINDING VALUES ***" << endl;
	cout << endl << endl;
	
	//Input Values of X and Y
	int x, y;
	float z;
	z = 2.5;
	cout << setprecision(2) << fixed;
	cout << "Find the value of V in terms of X and Y." << endl;
	cout << endl;
	cout << "Please Input Any Values For\n";
	cout << "X: "; cin >> x;
	cout << "Y: "; cin >> y;
	cout << endl;
	
	cout << "COMPUTING..." << endl;
	cout << endl;

	//Switch Statement if X values are 1, 2 or any digit
	switch (x)
	{
		//Computations for X=1
		case 1:
			cout << setprecision(2) << fixed;	
			if (y > 1 && y < 5)
			{
				cout << "V = " << x*y*z << endl;
				break;
			}
			else if (y >= 5)
			{
				cout << "V = " << (x+y)/z << endl;
				break;
			}
		//Computations for X=2	
		case 2:
			cout << setprecision(2) << fixed;
			if (y <= 5)
			{
				float r = ((x-y)/z);
				cout << "V = " << abs(r)<< endl;
				break;
			}
			else if (y > 5)
			{
				cout << "V = " << x-(sqrt(y+z)) << endl;
				break;
			}
		//Computations for X=any value
		default:
			{
			cout << setprecision(2) << fixed;
			cout << "V = " << x+y+z << endl;
			break;
			}
				
		}

	
	getch ();
	return 0;
}
