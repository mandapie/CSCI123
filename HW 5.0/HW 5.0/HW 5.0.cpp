/*
NAME: Amanda Pan
CLASS: CSCI 123
CRN: 12762
Compiler: VS 2012 professional
Date: Dec 3rd
Homework 5
*/

#include <iostream>
using namespace std;
#include "HW 5.0.h"

int main()
{
	Count obj;
	char ans, loop = 'y';

	while (loop == 'y')
	{
		cout << "(E)nter text to be counted.\n";
		cout << "(C)ount and display counted characters.\n";
		cout << "(Q)uit.\n";
		cin >> ans;
		cin.ignore();

		switch (ans)
		{
			case 'E':
			case 'e':
				obj.InputData();
				break;
			case 'C':
			case 'c':
				cout << "\n";
				obj.CharCount();
				break;
			case 'Q':
			case 'q':
				loop = 'n';
				break;
			default:
				cout << "Pick 'E', 'C', or 'Q' only\n\n";
		}
		cout << endl;
	}
	system ("PAUSE");
	return 0;
}

void Count :: InputData()
{
	cout << "Enter a line of text.\n";
	cin.getline(text, sizeof(text));
	length = cin.gcount();
	cin.ignore();
}

void Count :: CharCount()
{
	for (int i = 0; i < 10; i++)
		number[i] = i;
	for (int i = 0; i < 26; i++)
		lalpha[i] = (65 + i);
	for (int i = 0; i < 26; i++)
		ualpha[i] = (97 + i);

	for (int i = 0; i < 62; i++)
		charcount[i] = 0;
	
	for (int j = 0; j < length; j++)
	{
		if (text[j] >= 'a' && text[j] <= 'z')
		{
			short offset = text[j];
			charcount[offset-97+37]++;
		}
		
		if (text[j] >= 'A' && text[j] <= 'Z')
		{
			short offset = text[j];
			charcount[offset-65+10]++;
		}

		if (text[j] >= '0' && text[j] <= '9')
		{
			short offset = text[j];
			charcount[offset-48]++;
		}
	}

	for (int j = 0; j < 62; j++)
	{
		if(j >= 0 && j < 10)
			cout << "Numbers of " << j << " entered: " << charcount[j] << "\n";
		else if (j > 9 && j  < 36)
			cout << "Numbers of " << (char)(j+55) << " entered: " << charcount[j] << "\n";
		else if (j > 36 && j  < 62)
			cout << "Numbers of " << (char)(j+60) << " entered: " << charcount[j] << "\n";
	}
}