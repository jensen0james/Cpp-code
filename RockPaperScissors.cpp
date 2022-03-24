/*
Student Name:  James Jensen
Date: 01/02/2022
Lab Assignment: Lab 02 - Ch3 ExpressInteract
Project Name: Lab02_03Proj
Description: This program gets the length and width for two rectangles and
informs the user which of the two is bigger.
Credits: Not Applicable
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Global constants
const int MAX_VALUE = 3;
const int MIN_VALUE = 1;
const int RANGE = MAX_VALUE - MIN_VALUE + 1;
const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;
const int QUIT = 4;

// Function prototypes
int getUserChoice()
{
	int selection = 0;

	while (selection < ROCK || selection > QUIT)
	{
		cout << "Menu\n\n1. Rock\n2. Paper\n3. Scissors\n4. Quit\n\nEnter your choice: ";
		cin >> selection;

		if (selection < ROCK || selection > QUIT)
			cout << "Try again." << endl;

	}

	return selection;
}
int getComputerChoice()
{
	int randomNumber = rand() % RANGE;

	return randomNumber;
}
void displayResult(int result)
{
	if (result == ROCK)
		cout << "Rock";
	if (result == PAPER)
		cout << "Paper";
	if (result == SCISSORS)
		cout << "Scissors";
}
void determineWinner(int user, int computer)
{
	if (user == computer)
	{
		cout << "Tie. No winner." << endl;
	}
	else if (user >= computer && user != ROCK)
	{
		cout << "YOU win! ";
		displayResult(user);
		cout << " beats ";
		displayResult(computer);
		cout << '.' << endl;
	}
	else if (user == ROCK && computer == SCISSORS)
	{
		cout << "YOU win! ";
		displayResult(user);
		cout << " beats ";
		displayResult(computer);
		cout << '.' << endl;
	}
	else
	{
		cout << "YOU lost! ";
		displayResult(computer);
		cout << " beats ";
		displayResult(user);
		cout << '.' << endl;
	}
}
void displayChoice(int choice)
{
	switch (choice)
	{
	case 1:
		cout << "Rock\n";
		break;
	case 2:
		cout << "Paper\n";
		break;
	case 3:
		cout << "Scissors\n";
		break;
	default:
		cout << "you are screwed Your're computer might blow up";
	}
		

}
int main()
{
	int userChoice;
	int computerChoice;

	unsigned seed = time(0);
	srand(seed);

	// Get computer choice
	computerChoice = getComputerChoice();
	// Get user choice
	userChoice = getUserChoice();
	while (userChoice != QUIT)
	{
		cout << "You selected: ";
		displayChoice(userChoice);
		cout << "Computer selected: ";
		displayChoice(computerChoice);
		// Determine the winner
		determineWinner(userChoice, computerChoice);
		// Get computer choice
		computerChoice = getComputerChoice();
		// Get user choice
		userChoice = getUserChoice();
	}

	return 0;
}
/*
Proof 1:
Menu

1. Rock
2. Paper
3. Scissors
4. Quit

Enter your choice: 1
You selected: Rock
Computer selected: Rock
Tie. No winner.
Proof 2:
Menu

1. Rock
2. Paper
3. Scissors
4. Quit

Enter your choice: 3
You selected: Scissors
Computer selected: Paper
YOU win! Scissors beats Paper.
Proof 3:
Menu

1. Rock
2. Paper
3. Scissors
4. Quit

Enter your choice: 2
You selected: Paper
Computer selected: Rock
YOU win! Paper beats Rock.
*/