/*
Student Name:  James Jensen
Date: 25/01/2022
Lab Assignment: Lab 01 - Ch2 Intro
Project Name: Lab01_02Proj
Description: This calculates the sum of five hardcoded values
Credits: Not Applicable
*/
#include <iostream>
using namespace std;

int main()
{
	double values[] = { 28,32,37,24,33 };
	double total = 0;

	for (int i = 0; i < (sizeof(values) / sizeof(double)); i++)
	{
		total += values[i];
	}

	cout << "This program calculates the average of five numbers.\n" << endl;
	cout << "The sum of the five numbers is: " << total << endl;
	cout << "The average of the five numbers is: " << total / (sizeof(values)/sizeof(double)) << endl;

	system("pause");

	return 0;
}
/*
Proof:
This program calculates the average of five numbers.

The sum of the five numbers is: 154
The average of the five numbers is: 30.8
Press any key to continue . . .
*/
