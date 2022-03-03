/*
Student Name:  James Jensen
Date: 03/03/2022
Lab Assignment: Lab 06 - Ch5 Looping
Project Name: Lab06_01Proj
Description: This program is a guessing game
Credits: Not Applicable
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	// These are the Max Value and Min Value +1 that the program will use
	const int MAX_VALUE = 100;
	const int MIN_VALUE = 0;
	const int RANGE = MAX_VALUE - MIN_VALUE + 1;

	unsigned seed = time(0);
	srand(seed);

	int answer = rand() % RANGE;

	int selection;

	cout << "I'm thinking of a number between 1 and 100. Can you guess what it is? ";
	cin >> selection;

	bool flag = true;
	int counter = 0;

	while (flag)
	{
		counter++;

		if (selection < answer)
		{
			cout << "No, that's too low." << endl;
		}
		else if (selection > answer)
		{
			cout << "Sorry, that's too high." << endl;
		}

		if (selection != answer)
		{
			cout << "Guess again: ";
			cin >> selection;
		}
		else
		{
			cout << "Congratulations! You guessed it!\nI was thinking of the number " << answer << "." << endl;
			cout << "You got it right in " << counter << " guesses" << endl;
			flag = false;
		}
	}


	system("pause");
	return 0;
}

/*
Proof 1:
I'm thinking of a number between 1 and 100. Can you guess what it is? 50
Sorry, that's too high.
Guess again: 25
No, that's too low.
Guess again: 37
No, that's too low.
Guess again: 43
No, that's too low.
Guess again: 47
No, that's too low.
Guess again: 48
No, that's too low.
Guess again: 49
Congratulations! You guessed it!
I was thinking of the number 49.
You got it right in 7 guesses
Press any key to continue . . .
*/