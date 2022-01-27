/*
Student Name:  James Jensen
Date: 27/01/2022
Lab Assignment: Lab 01 - Ch2 Intro
Project Name: Lab01_02Proj
Description: This calculates the sum of five hardcoded values
Credits: Not Applicable
*/
#include <iostream>
using namespace std;

int main()
{
	double values[5];
	double total = 0;

	cout << "This program calculates the average of five numbers.\n" << endl;
	cout << "Enter five numbers and press the ENTER key after each number:" << endl;

	for (int i = 0; i < (sizeof(values) / sizeof(double)); i++)
	{
		cin >> values[i];
	}

	cout << "\nNumbers entered: ";

	for (int i = 0; i < (sizeof(values) / sizeof(double)); i++)
	{
		cout << values[i] << "\t";
		total += values[i];
	}

	
	cout << "\n\nThe sum of the five numbers is: " << total << endl;
	cout << "\nThe average of the five numbers is: " << total / (sizeof(values) / sizeof(double)) << "\n" << endl;

	system("pause");

	return 0;
}
/*
Proof:
This program calculates the average of five numbers.

Enter five numbers and press the ENTER key after each number:
1.1
2.333
4.444
6.88
1.0001

Numbers entered: 1.1    2.333   4.444   6.88    1.0001

The sum of the five numbers is: 15.7571

The average of the five numbers is: 3.15142

Press any key to continue . . .
*/