/*
Student Name:  James Jensen
Date: 10/04/2022
Lab Assignment: Lab 09 - Ch7 Arrays
Project Name: Lab09_Proj
Description: Read and manipulate values from file
Credits: Not Applicable
*/
#include <list>
#include <iostream>
#include <fstream>
using namespace std;

void getLowest(list <int> allText)
{
	cout << "The lowest value is " << allText.front() << endl;
}

void getHighest(list <int> allText)
{
	cout << "The highest value is " << allText.back() << endl;
}

int getSum(list <int> allText)
{
	int sum = 0;

	list <int> ::iterator i;
	for (i = allText.begin(); i != allText.end(); i++)
		sum += *i;

	cout << "The sum of numbers is " << sum << endl;

	return sum;
}

void getAverage(list <int> allText, int sum)
{
	cout << "The average of the numbers is " << 1.0 * sum / allText.size() << endl;
}

int main()
{
	ifstream textFile;
	string fileName = "C:\\Users\\jense\\Downloads\\numbers.txt";
	int text;
	list <int> allText;

	textFile.open(fileName);

	while (textFile >> text)
	{
		allText.push_back(text);
	}

	textFile.close();

	allText.sort();

	getHighest(allText);
	getLowest(allText);
	int sum = getSum(allText);
	getAverage(allText, sum);

	return 0;
}

/*
Proof:
The highest value is 89
The lowest value is 8
The sum of numbers is 520
The average of the numbers is 43.3333
*/