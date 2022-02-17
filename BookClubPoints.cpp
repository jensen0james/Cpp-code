/*
Student Name:  James Jensen
Date: 17/02/2022
Lab Assignment: Lab 04 - Ch4 Making Decisions
Project Name: Lab04_01Proj
Description: This program that asks the user to enter the number of books that they purchased this 
month, then displays the number of points awarded.
Credits: Not Applicable
*/
#include <iostream>
using namespace std;

int main()
{
	// these are the variables
	int purchasedBooks;
	int points;

	// this is the output/input for the console
	cout << "How many books did you purchase this month? ";
	cin >> purchasedBooks;

	// this is an if else if statement
	if (purchasedBooks == 0)
	{
		points = 0;
		cout << "You earned " << points << " points." << endl;
	}
	else if (purchasedBooks == 1)
	{
		points = 5;
		cout << "You earned " << points << " points." << endl;
	}
	else if (purchasedBooks == 2)
	{
		points = 15;
		cout << "You earned " << points << " points." << endl;
	}
	else if (purchasedBooks == 3)
	{
		points = 30;
		cout << "You earned " << points << " points." << endl;
	}
	else if (purchasedBooks >= 4)
	{
		points = 60;
		cout << "You earned " << points << " points." << endl;
	}
	else
	{
		cout << "That's an invalid number of books." << endl;
	}

	system("pause");
	return 0;
}
/*
Proof 1:
How many books did you purchase this month? 0
You earned 0 points.
Press any key to continue . . .
Proof 2:
How many books did you purchase this month? 1
You earned 5 points.
Press any key to continue . . .
Proof 3:
How many books did you purchase this month? 2
You earned 15 points.
Press any key to continue . . .
Proof 4:
How many books did you purchase this month? 3
You earned 30 points.
Press any key to continue . . .
Proof 5:
How many books did you purchase this month? 4
You earned 60 points.
Press any key to continue . . .
Proof 6:
How many books did you purchase this month? 5
You earned 60 points.
Press any key to continue . . .
Proof 7:
How many books did you purchase this month? -5
That's an invalid number of books.
Press any key to continue . . .
*/