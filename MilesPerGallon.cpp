/*
Student Name:  James Jensen
Date: 01/02/2022
Lab Assignment: Lab 02 - Ch3 ExpressInteract
Project Name: Lab02_01Proj
Description: User enters in values for the gas tank size and distance car can travel on
full tank and then calculates the MPG.
Credits: Not Applicable
*/
#include <iostream>
using namespace std;

int main()
{
	double gallons;
	double distanceFullTank;

	cout << "This program calculates MPG based on the number of gallons" << endl;
	cout << "that a car's gas tank can hold, and the number of miles that" << endl;
	cout << "it may be driven on a full tank of gas.\n" << endl;
	cout << "Enter the number of gallons that the gas tank can hold: ";
	cin >> gallons;
	cout << "Enter the number of miles that may be driven per tank of gas: ";
	cin >> distanceFullTank;
	cout << "The car's MPG = " << distanceFullTank / gallons << endl;
	
	system("pause");
	return 0;
}
/*
Proof 1:
This program calculates MPG based on the number of gallons
that a car's gas tank can hold, and the number of miles that
it may be driven on a full tank of gas.

Enter the number of gallons that the gas tank can hold: 15
Enter the number of miles that may be driven per tank of gas: 500
The car's MPG = 33.3333

Proof 2:
This program calculates MPG based on the number of gallons
that a car's gas tank can hold, and the number of miles that
it may be driven on a full tank of gas.

Enter the number of gallons that the gas tank can hold: 18
Enter the number of miles that may be driven per tank of gas: 400
The car's MPG = 22.2222

Proof 3:
This program calculates MPG based on the number of gallons
that a car's gas tank can hold, and the number of miles that
it may be driven on a full tank of gas.

Enter the number of gallons that the gas tank can hold: 10
Enter the number of miles that may be driven per tank of gas: 650
The car's MPG = 65
*/
