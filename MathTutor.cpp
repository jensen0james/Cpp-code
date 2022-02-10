/*
Student Name:  James Jensen
Date: 10/02/2022
Lab Assignment: Lab 03 - Ch4 UsingIf
Project Name: Lab03_04Proj
Description: This program picks two random numbers and then letts the user
solve the addition before displaying the answer
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

	// This is the seed to ensure a random number
	unsigned seed = time(0);
	srand(seed);

	int numberOne = (rand() % (MAX_VALUE - MIN_VALUE + 1));
	int numberTwo = (rand() % (MAX_VALUE - MIN_VALUE + 1));

	// Display
	cout << setw(3) << numberOne << endl;
	cout << setw(3) << numberTwo << endl;
	cout << "----";

	// Pause
	cin.get();

	// Math
	cout << numberOne + numberTwo << endl;

	system("pause");
	return 0;
}
/*
Proof 1:
466
231
----
697
Proof 2:
102
427
----
529
*/