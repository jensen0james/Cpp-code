/*
Student Name:  James Jensen
Date: 25/01/2022
Lab Assignment: Lab 01 - Ch2 Intro
Project Name: Lab01_03Proj
Description: This program outputs size of data types.
Credits: Not Applicable
*/
#include <iostream>
using namespace std;

int main()
{
	cout << "This program outputs data type sizes:\n" << endl;
	cout << "Data Type\tSize" << endl;
	cout << "---------\t----" << endl;
	cout << "char\t\t" << sizeof(char) << endl;
	cout << "int\t\t" << sizeof(int) << endl;
	cout << "float\t\t" << sizeof(float) << endl;
	cout << "double\t\t" << sizeof(double) << endl;

	system("pause");

	return 0;
}
/*
Proof:
This program outputs data type sizes:

Data Type       Size
---------       ----
char            1
int             4
float           4
double          8
Press any key to continue . . .
*/