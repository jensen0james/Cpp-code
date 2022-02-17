/*
Student Name:  James Jensen
Date: 17/02/2022
Lab Assignment: Lab 04 - Ch4 Making Decisions
Project Name: Lab04_03Proj
Description: This program is a math tutor with menu
Credits: Not Applicable
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	// These are the Max Value and Min Value +1 that the program will use
	const int MAX_VALUE = 500;
	const int MIN_VALUE = 0;

	int selection;

	// This is the seed to ensure a random number
	unsigned seed = time(0);
	srand(seed);

	int numberOne = (rand() % (MAX_VALUE - MIN_VALUE + 1));
	int numberTwo = (rand() % (MAX_VALUE - MIN_VALUE + 1));

	// Display
	
	

	do
	{
		cout << "Menu\n\n1. Addition Problem\n2. Subtraction Problem\n3. Multiplication Problem\n4. Quit this program\n\nEnter your choice(1 - 4) : ";
		cin >> selection;

		switch (selection)
		{
		case 1:
			cout << "\n" << setw(3) << numberOne << endl;
			cout << setw(3) << numberTwo << endl;
			cout << "----";

			// first cin.get() is to clear buffer so program will pause
			cin.get();

			cin.get();

			cout << numberOne + numberTwo << "\n" << endl;

			break;

		case 2:
			cout << "\n" << setw(3) << numberOne << endl;
			cout << setw(3) << numberTwo << endl;
			cout << "----";

			cin.get();

			cin.get();

			cout << numberOne - numberTwo << "\n" << endl;

			break;

		case 3:
			cout << "\n" << setw(3) << numberOne << endl;
			cout << setw(3) << numberTwo << endl;
			cout << "----";

			cin.get();

			cin.get();

			cout << numberOne * numberTwo << "\n" << endl;

			break;

		case 4:
			cout << "Leaving menu." << endl;

			break;

		default:
			cout << "You may only enter 1, 2, 3, or 4." << endl;
		}
	} while (selection != 4);
	

	system("pause");
	return 0;
}
/*
Proof 1:
Menu

1. Addition Problem
2. Subtraction Problem
3. Multiplication Problem
4. Quit this program

Enter your choice(1 - 4) : 1

259
176
----
435

Menu

1. Addition Problem
2. Subtraction Problem
3. Multiplication Problem
4. Quit this program

Enter your choice(1 - 4) : 2

259
176
----
83

Menu

1. Addition Problem
2. Subtraction Problem
3. Multiplication Problem
4. Quit this program

Enter your choice(1 - 4) : 3

259
176
----
45584

Menu

1. Addition Problem
2. Subtraction Problem
3. Multiplication Problem
4. Quit this program

Enter your choice(1 - 4) : 5
You may only enter 1, 2, 3, or 4.
Menu

1. Addition Problem
2. Subtraction Problem
3. Multiplication Problem
4. Quit this program

Enter your choice(1 - 4) : -5
You may only enter 1, 2, 3, or 4.
Menu

1. Addition Problem
2. Subtraction Problem
3. Multiplication Problem
4. Quit this program

Enter your choice(1 - 4) : 4
Leaving menu.
Press any key to continue . . .
*/