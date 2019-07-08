#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	//Ask number of gallons and unpaid balance. Output total water Bill.
	
	cout << "*** WATER BILL ***" << endl;
	cout << endl << endl;
	
	cout << "Please Answer the following Questions provided ACCURATELY." << endl;
	cout << endl;
	
	int x;
	cout << "How many gallons of water have you consumed this month: "; cin >> x;
	
	int y;
	char a;
	cout << "Do you have unpaid balance: [Y]es & [N]o\n"; cin >> a;
	cout << endl;
	switch (a)
	{
		case 'Y':
		case 'y':
			cout << "How much is your unpaid balance: "; cin >> y;
			cout << endl << endl;
			
			cout << setprecision(2) << fixed;
			cout << "Billing Statement:" << endl;
			cout << "Water Demand Charge\t" << "Php 35.00" << endl;
			cout << "Consumption Charge\t" << "Php " << x*1.10 << endl;
			cout << "Unpaid Balance\t" << "	" << "Php " << y << ".00" << endl;
			cout << "Late Charge" << "		" << "Php 20.00" << endl;
			cout << endl << endl;
			cout << "Total Bill:\t" << "	" << "Php " << 35+(x*1.10)+y+20 << endl;
			break;
		
		case 'N':
		case 'n':
			cout << setprecision(2) << fixed;
			cout << "Billing Statement:" << endl;
			cout << "Water Demand Charge\t" << "Php 35.00" << endl;
			cout << "Consumption Charge\t" << "Php " << x*1.10 << endl;
			cout << endl << endl;
			cout << "Total Bill:\t" << "	" << "Php " << 35+(x*1.10) << endl;
			break;		
		
		default:
			cout << "INVALID ANSWER!!!" << endl;
			break;
	}
	
	getch ();
	return 0;
}

