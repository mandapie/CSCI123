/*
Name: Amanda Pan
Class: CSCI 123
CRN: 12762
Compiler: Visual Studio 2012 professional
Homework:3
*/

#include <iostream>
using namespace std;
#include "HW 3.3.h"

int EnterNumOfLapsToTime();
int CalcAndDisplayLapTimes(double CalcNumOfLaps);

int main()
{
	double NumOfLapsEntered = 0;
	char ans, loop = 'y';
	
	while (loop == 'y')
	{
		NumOfLapsEntered = EnterNumOfLapsToTime();
		CalcAndDisplayLapTimes(NumOfLapsEntered);

		cout << "The number of laps you entered is: " << NumOfLapsEntered << "\n";
		cout << "Do you want to continue?(Y/N)\n";
		cin >> ans;

		switch (ans)
		{
			case 'Y':
			case 'y':
				break;
			case 'N':
			case 'n':
				loop = 'n';
				break;
		}
	}

	system("PAUSE");
	return 0;
}

int EnterNumOfLapsToTime()
{
	int NumOfLaps;

	cout << "Enter the number of laps to time: ";
	cin >> NumOfLaps;
	cin.ignore();

	while (NumOfLaps > 71)
	{
		cout << "You goofed.\n";
		cout << "Enter the number of laps to time: ";
		cin >> NumOfLaps;
		cin.ignore();
	}
	
	return NumOfLaps;
}

int CalcAndDisplayLapTimes(double CalcNumOfLaps)
{
	double result = 0;
	int loop = 2;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	result = InitialLapTime;

	if (CalcNumOfLaps == 1)
		loop = 1;
		
	cout << "lap 1 = " << result << " seconds" << endl;

	while (loop > 1 && loop <= CalcNumOfLaps)
	{
		result -= SPEED/4;
		result += TIRE;
		cout << "lap " << loop << " = " << result << " seconds" << endl;
		loop++;
	}

	return 0;
}