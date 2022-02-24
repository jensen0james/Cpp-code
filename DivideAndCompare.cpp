/*
Student Name:  James Jensen
Date: 24/02/2022
Lab Assignment: Lab 05 - Divide And Compare
Project Name: Lab05_01Proj
Description: This program that asks the user to enter the number, divides that number by two, and
determines if the original number is greater than, equal to, or less than 150.
Credits: Not Applicable
*/
#include <iostream>
using namespace std;

int main()
{
	double number;

	cout << "James Jensen" << endl;
	cout << "CSCI175N\n" << endl;

	cout << "Enter a number between 100 and 200" << endl;
	cout << "and I will divide it by 2" << endl;
	cout << "and then tell you if it is higher, lower, or equal to 150: ";

	cin >> number;

	cout << "\n" << number << " divided by 2 = " << number / 2 << endl;

	if (number < 150)
	{
		cout << "\nnumber is < 150\n" << endl;
	}
	else if (number == 150)
	{
		cout << "\nnumber is = 150\n" << endl;
	}
	else
	{
		cout << "\nnumber is > 150\n" << endl;
	}

	system("pause");
	return 0;
}
/*
Proof 1:
James Jensen
CSCI175N

Enter a number between 100 and 200
and I will divide it by 2
and then tell you if it is higher, lower, or equal to 150: 149

149 divided by 2 = 74.5

number is < 150

Press any key to continue . . .
Proof 2:
James Jensen
CSCI175N

Enter a number between 100 and 200
and I will divide it by 2
and then tell you if it is higher, lower, or equal to 150: 150

150 divided by 2 = 75

number is = 150

Press any key to continue . . .
Proof 3:
James Jensen
CSCI175N

Enter a number between 100 and 200
and I will divide it by 2
and then tell you if it is higher, lower, or equal to 150: 151

151 divided by 2 = 75.5

number is > 150

Press any key to continue . . .
*/