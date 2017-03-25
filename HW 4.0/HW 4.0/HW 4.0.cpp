/*
NAME: Amanda Pan
CLASS: CSCI 123
CRN: 12762
Compiler: VS 2012 professional
Date: Nov 5th
Homework 4
*/

#include <iostream>
using namespace std;
#include "matrix.h"

int main()
{
	matrix obj;
	char ans, loop = 'y';

	while (loop == 'y')
	{
		cout << "(E)nter the matrix data\n";
		cout << "(C)alculate the matrix multiplication\n";
		cout << "(D)isplay the input and output matrices\n";
		cout << "(Q)uit the program\n";
		cin >> ans;

		switch (ans)
		{
			case 'E':
			case 'e':
				obj.InputMatrix();
				break;
			case 'C':
			case 'c':
				obj.Calculate();
				break;
			case 'D':
			case 'd':
				obj.OutMatrix();
				break;
			case 'Q':
			case 'q':
				loop = 'n';
				break;
			default:
				cout << "Pick 'E', 'C', 'D', or 'Q' only\n\n";
		}

		cout << endl;
	}
	system ("PAUSE");
	return 0;
}

void matrix :: InputMatrix()
{
	cout << "\nEnter 3 nunmbers of each row for the first matrix\n";
	for (int row = 0 ; row < SIZE ; row++ )
	{
		cout << "Matrix P, row " << (row + 1) << ": ";
		for (int col = 0 ; col < SIZE ; col++ )
			cin >> P[row][col];
	}
	
	cout << endl;

	cout << "Enter 3 nunmbers of each row for the second matrix\n";
	for (int row = 0 ; row < SIZE ; row++ )
	{
		cout << "Matrix Q, row " << (row + 1) << ": ";
		for (int col = 0 ; col < SIZE ; col++ )
			cin >> Q[row][col];
	}
	
	cout << endl;
}

void matrix :: Calculate()
{
	for (int row = 0 ; row < SIZE ; row++ )
		for (int col = 0 ; col < SIZE ; col++ )
		{
			R[row][col] = 0;
			for (int k = 0; k < SIZE; k++ )
				R[row][col] += P[row][k] * Q[k][col];
		}
}

void matrix :: OutMatrix()
{
	cout << "The multiplication of entered matrices:\n";
	cout << "    P                     Q                               R\n";
	cout << "    C1    C2    C3        c1    c2      c3\n";

	for (int row = 0 ; row < SIZE ; row++ )
	{		
		if (row == 1)
			cout << "r" << (row+1) << "| " << P[row][0] << "\t  " << P[row][1] << "\t" << P[row][2] << " |\t| " << Q[row][0] << "\t" << Q[row][1] << "\t" <<  Q[row][2] << " |\t=\t| " << R[row][0] << "\t" << R[row][1] << "\t" << R[row][2] << " |\n";
		else
			cout << "r" << (row+1) << "| " << P[row][0] << "\t  " << P[row][1] << "\t" << P[row][2] << " |\t| " << Q[row][0] << "\t" << Q[row][1] << "\t" <<  Q[row][2] << " |\t \t| " << R[row][0] << "\t" << R[row][1] << "\t" << R[row][2] << " |\n";
	}

	cout << endl;
}