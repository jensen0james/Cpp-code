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
	const int RANGE = MAX_VALUE - MIN_VALUE + 1;

	int selection;

	// This is the seed to ensure a random number


	// Display

	cout << "Menu\n\n1. Addition Problem\n2. Subtraction Problem\n3. Multiplication Problem\n4. Quit this program\n\nEnter your choice(1 - 4) : ";
	cin >> selection;

	while (selection != 4)
	{
		unsigned seed = time(0);
		srand(seed);

		int numberOne = rand() % RANGE;
		int numberTwo = rand() % RANGE;

		bool flag = true;
		int result;

		switch (selection)
		{
		case 1:
			result = numberOne + numberTwo;
			break;

		case 2:
			result = numberOne - numberTwo;
			break;

		case 3:
			result = numberOne * numberTwo;
			break;

		default:
			cout << "You may only enter 1, 2, 3, or 4." << endl;
			flag = false;
		}

		if (flag)
		{
			cout << "\n" << setw(3) << numberOne << endl;
			cout << setw(3) << numberTwo << endl;
			cout << "----";

			//First cin.get() clears the buffer allowing the second statement to pause the program
			cin.get();

			cin.get();

			cout << result << "\n" << endl;
		}
		cout << "Menu\n\n1. Addition Problem\n2. Subtraction Problem\n3. Multiplication Problem\n4. Quit this program\n\nEnter your choice(1 - 4) : ";
		cin >> selection;
	}

	cout << "Leaving program." << endl;


	system("pause");
	return 0;
}


/*cout << "\n" << setw(3) << numberOne << endl;
cout << setw(3) << numberTwo << endl;
cout << "----";

cin.get();

cin.get();

cout << numberOne * numberTwo << "\n" << endl;
*/

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