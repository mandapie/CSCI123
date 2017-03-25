/*
NAME: Amanda Pan
CLASS: CSCI 123
CRN: 12762
Compiler: VS 2012 professional
Date: Dec 3rd
Homework 5
*/

#pragma once

class Count
{
	long length;
	int charcount[62];
	int number[10];
	int lalpha[26];
	int ualpha[26];
	char text [132];
public:
	void InputData ();
	void CharCount ();
};