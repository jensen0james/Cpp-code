/*
Student Name:  James Jensen
Date: 08/03/2022
Lab Assignment: Lab 07 - Ch6 Functions
Project Name: Lab07_01Proj
Description: This code demonstrates a function
named coinToss that simulates the tossing of a coin.
Credits: Not Applicable
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <chrono>
#include <thread>
using namespace std;

const int MAX_VALUE = 1;
const int MIN_VALUE = 0;
const int RANGE = MAX_VALUE - MIN_VALUE + 1;

int coinToss()
{
	using namespace std::chrono;

	unsigned seed = time(0);
	srand(seed);

	int coin = rand() % RANGE;
	coin++;

	// for loop is to fast to get random numbers, have to slow down the program
	std::this_thread::sleep_until(system_clock::now() + seconds(3));

	if (coin == 1) 
	{
		cout << "heads";
		return 1;
	}
	else
	{
		cout << "tails";
		return 2;
	}
}

int main()
{
	int result;
	int counterHeads = 0;
	int counterTails = 0;
	int selection;

	cout << "How many tosses should I make? ";
	cin >> selection;

	for (int i = 1; i <= selection; i++)
	{

		cout << i << ":\t";
		result = coinToss();
		cout << endl;

		if (result == 1)
			counterHeads++;
		else
			counterTails++;
	}

	cout << "Heads was flipped " << counterHeads << " times." << endl;
	cout << "Tails was flipped " << counterTails << " times." << endl;

	system("pause");
	return 0;
}

/*
Proof 1:
How many tosses should I make? 6
1:      tails
2:      tails
3:      tails
4:      heads
5:      heads
6:      heads
Heads was flipped 3 times.
Tails was flipped 3 times.
Press any key to continue . . .
*/