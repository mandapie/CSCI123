/************************
Name: Amanda Pan
Class: CSCI 123
CRN: 12762
Compiler: VS 2012 professional
Date: Oct 1st
Homework 2
************************/
#include <iostream>
using namespace std;

const double CALTAX = 0.529, FEDTAX = 0.18, CARBTAX = 0.40, LIT2GAL = 3.7854;

void percent();

int main()
{
	char ans;
	char loop = 'y';
	
	while(loop == 'y')
	{
		cout << "(E)nter number of gallons\n" << "(Q)uit the program\n";
		cin >> ans;
		cin.ignore();
	
		switch (ans)
		{
			case 'E':
			case 'e':
				percent();
				break;
			case 'Q':
			case 'q':
				loop = 'n';
				break;
			default:
				cout << "Pick 'E' or 'Q' only\n\n";
		}
	}
	
	system("pause");
	return 0;
}

void percent ()
{
	double gal = 0, liters = 0, total = 0;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "\n""Number of gallons: ";
	cin >> gal;
	cin.ignore();
		
	liters = gal*LIT2GAL;
	total = liters*(CALTAX+FEDTAX+CARBTAX);

	cout << "Gallons: " << gal << "\n";
	cout << "Liters: " << liters << "\n";
	cout << "Total tax of liters: $" << total << "\n\n";
}