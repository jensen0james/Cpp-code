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
using namespace std;

int main()
{
	double lengthOne;
	double widthOne;
	double lengthTwo;
	double widthTwo;

	cout << "Enter the width of the first rectangle: ";
	cin >> widthOne;
	cout << "Enter the length of the first rectangle: ";
	cin >> lengthOne;
	cout << "Enter the width of the second rectangle: ";
	cin >> widthTwo;
	cout << "Enter the length of the second rectangle: ";
	cin >> lengthTwo;
	
	if (widthOne * lengthOne > widthTwo * lengthTwo)
	{
		cout << "Rectangle #1 has the greater area." << endl;
	}
	else if (widthOne * lengthOne < widthTwo * lengthTwo)
	{
		cout << "Rectangle #2 has the greater area." << endl;
	}
	else
	{
		cout << "Both rectangles have the same area." << endl;
	}

	system("pause");
	return 0;
}
/*
Proof 1:
Enter the width of the first rectangle: 2.3
Enter the length of the first rectangle: 5.7
Enter the width of the second rectangle: 1.8
Enter the length of the second rectangle: 11.6
Rectangle #2 has the greater area.
Proof 2:
Enter the width of the first rectangle: 2
Enter the length of the first rectangle: 2
Enter the width of the second rectangle: 2
Enter the length of the second rectangle: 2
Both rectangles have the same area.
Proof 3:
Enter the width of the first rectangle: 4
Enter the length of the first rectangle: 1.2
Enter the width of the second rectangle: 2.3
Enter the length of the second rectangle: 1.9
Rectangle #1 has the greater area.
*/
