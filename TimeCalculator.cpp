/*
Student Name:  James Jensen
Date: 10/02/2022
Lab Assignment: Lab 03 - Ch4 UsingIf
Project Name: Lab03_04Proj
Description: This program asks the user for a number of seconds and
converts them into days, hours, and minutes.
Credits: Not Applicable
*/
#include <iostream>

using namespace std;

int main()
{
	// Variables
	double seconds;

	// Prompt to enter values
	cout << "Enter a number of seconds: ";
	cin >> seconds;

	// If statements to determine how to display the seconds
	if (seconds >= 60)
	{
		cout << "There are " << seconds / 60 << " minutes in " << seconds << " seconds." << endl;
	}

	if (seconds >= 3600)
	{
		cout << "There are " << seconds / 3600 << " hours in " << seconds << " seconds." << endl;
	}

	if (seconds >= 86400)
	{
		cout << "There are " << seconds / 86400 << " days in " << seconds << " seconds." << endl;
	}

	system("pause");
	return 0;
}
/*
Proof 1:
Enter a number of seconds: 405679
There are 6761.32 minutes in 405679 seconds.
There are 112.689 hours in 405679 seconds.
There are 4.69536 days in 405679 seconds.
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