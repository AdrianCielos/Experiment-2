#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "*** INTERNET PACKAGES ***" << endl;
	cout << endl << endl;
	
	cout << "These are THREE (3) Different Subscription Packages by the Internet Service Provider:" << endl;
	cout << endl;
	cout << "PACKAGE [A]: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr." << endl;
	cout << "PACKAGE [B]: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr" << endl;
	cout << "PACKAGE [C]: For P1995/mo of unlimited access is provided." << endl;
	cout << endl << endl;
	
	char a;
	cout << "Please Enter the LETTER of the Package you have chosen: "; cin >> a;
	cout << endl;
	
	int x;
	cout << "Please Enter the NUMBER of Hours of your access: "; cin >> x;
	cout << endl << endl;
	
	cout << "COMPUTING..." << endl;
	cout << endl << endl;
	
	switch(a)
	{
		case 'A':
		case 'a':
			if(x >= 0 && x <=10)
			{
				cout << "Here is the TOTAL AMOUNT of your Monthly Bill: Php 995.00." << endl;
			}
			else if (x > 10)
			{
				cout << "Here is the TOTAL AMOUNT of your Monthly Bill: Php " << 995+(20*(x-10)) << ".00." << endl; 
			}
			else
			{
				cout << "INVALID NUMBER OF HOURS!!!" << endl;
			}
			break;
		
		case 'B':
		case 'b':
			if(x >= 0 && x <=20)
			{
				cout << "Here is the TOTAL AMOUNT of your Monthly Bill: Php 1495.00." << endl;
			}
			else if (x > 20)
			{
				cout << "Here is the TOTAL AMOUNT of your Monthly Bill: Php " << 1495+(10*(x-20)) << ".00." << endl; 
			}
			else
			{
				cout << "INVALID NUMBER OF HOURS!!!" << endl;
			}
			break;
		
		case 'C':
		case 'c':
			cout << "Here is the TOTAL AMOUNT of your Monthly Bill: Php 1995.00." << endl;
			break;
		
		default:
			cout << "YOU HAVE ENTERED AN INVALID PACKAGE!!!" << endl;
			break;
			
	}

getch ();
return 0;
}
