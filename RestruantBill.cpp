
/*
Student Name:  James Jensen
Date: 25/01/2022
Lab Assignment: Lab1-Ch2Intro
Project Name: Lab01_01Proj
Description: Calculates the tax and tip on a meal and displays results
Limitations or issues: All the input is hard coded with no opportunity for the
user to make changes.
Credits: Not Applicable
*/
#include <iostream>
using namespace std;
int main()
{
	double mealCharge = 44.5;
	double tax = 0.0675;
	double tip = 0.15;
	double taxAmt, tipAmt, total;
	taxAmt = mealCharge * tax; // tax calculation on total mealCharge
	tipAmt = (mealCharge + taxAmt) * tip; // tip calculation on meal plus tax
	total = mealCharge + tipAmt + taxAmt;
	cout << "This program calculates a total meal charge." << endl << endl;
	// add dollar sign to output display  ************************************
	cout << "Your meal charge is: $ " << mealCharge << endl;
	cout << "Your tax amount  is: $ " << taxAmt << endl;
	cout << "Your tip amount  is: $ " << tipAmt << endl;
	cout << "Your total bill  is: $ " << total << endl;
	system("pause");
	return 0;
}
/*
Proof:
This program calculates a total meal charge.
Your meal charge is: $ 44.5
Your tax amount  is: $ 3.00375
Your tip amount  is: $ 7.12556
Your total bill  is: $ 54.6293
Press any key to continue . . .
*/
