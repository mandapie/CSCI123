/*
NAME: Amanda Pan
CLASS: CSCI 123
CRN: 12762
Compiler: VS 2012 professional
Date: Nov 5th
Homework 4
*/

#pragma once

const int SIZE = 3;

class matrix
{
	int P[SIZE][SIZE];
	int Q[SIZE][SIZE];
	int R[SIZE][SIZE];
public:
	void InputMatrix();
	void Calculate();
	void OutMatrix();
};