/*
Student Name:  James Jensen
Date: 10/02/2022
Lab Assignment: Lab 03 - Ch4 UsingIf
Project Name: Lab03_04Proj
Description: This program calulates the rise of the sealevel over a set period
of time
Credits: Not Applicable
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// These are constant variables
	const int NUMBER_OF_YEARS = 10;
	const double YEARLY_RISE_MM = 1.5;

	// Variable
	double totalRise = 0;

	// Display
	cout << "Year\tRise" << endl;
	cout << "-----------------" << endl;

	// For loop for calculation
	for (int i = 1; i < NUMBER_OF_YEARS + 1; i++)
	{
		totalRise += YEARLY_RISE_MM;
		cout << setw(2) << i << "\t" << setw(5) << fixed << setprecision(2) << totalRise << " mm" << endl;
	}

	system("pause");
	return 0;
}
/*
Proof 1:
Year    Rise
-----------------
 1       1.50 mm
 2       3.00 mm
 3       4.50 mm
 4       6.00 mm
 5       7.50 mm
 6       9.00 mm
 7      10.50 mm
 8      12.00 mm
 9      13.50 mm
10      15.00 mm
Proof 2:
Enter a number of seconds: 89999
There are 1499.98 minutes in 89999 seconds.
There are 24.9997 hours in 89999 seconds.
There are 1.04166 days in 89999 seconds.
Proof 3:
Enter a number of seconds: 4000
There are 66.6667 minutes in 4000 seconds.
There are 1.11111 hours in 4000 seconds.
*/