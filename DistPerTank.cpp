/*
Student Name:  James Jensen
Date: 25/01/2022
Lab Assignment: Lab 01 - Ch2 Intro
Project Name: Lab01_04Proj
Description: Calculates and displays the distance a car has traveled
on one gas of tank when driven in town and when driven on the highway.
Credits: Not Applicable
*/
#include <iostream>
using namespace std;

int main()
{
	double gasTankSizeGal = 20;
	double townMPG = 21.5;
	double highwayMPG = 26.8;
	double townDist, highwayDist;

	townDist = gasTankSizeGal * townMPG;
	highwayDist = gasTankSizeGal * highwayMPG;

	cout << "This program calculates miles per gallon for a preset number of gallons.\n" << endl;
	cout << "A car has a " << gasTankSizeGal << " gallon fuel tank." << endl;
	cout << "This car gets " << townMPG << " miles per gallon in the city" << endl;
	cout << "and " << highwayMPG << " miles per gallon on the highway. That means:\n" << endl;
	cout << "In town, the car can average a distance of" << endl;
	cout << townDist << " miles on a full tank.\n" << endl;
	cout << "On the highway, the car can average a distance of" << endl;
	cout << highwayDist << " miles on a full tank.\n" << endl;

	system("pause");

	return 0;
}
/*
Proof:
This program calculates miles per gallon for a preset number of gallons.

A car has a 20 gallon fuel tank.
This car gets 21.5 miles per gallon in the city
and 26.8 miles per gallon on the highway. That means:

In town, the car can average a distance of
430 miles on a full tank.

On the highway, the car can average a distance of
536 miles on a full tank.

Press any key to continue . . .
*/