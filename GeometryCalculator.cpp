/*
Student Name:  James Jensen
Date: 17/02/2022
Lab Assignment: Lab 04 - Ch4 Making Decisions
Project Name: Lab04_02Proj
Description: This program displays a menu.
Credits: Not Applicable
*/
#include <iostream>
using namespace std;

int main()
{
	// these are the variables
	int input;
	// constant declarations
	const double PI = 3.14159;

	// this is displaying menu to the console
	cout << "Geometry Calculator\n\n1. Calculate the area of a Circle\n2. Calculate the area of a Rectangle\n3. Calculate the area of a Triangle\n4. Quit\n\nEnter your choice(1 - 4) : ";
	cin >> input;

	switch (input)
	{
	case 1:
		double radius;

		cout << "Enter the cirle's radius: ";
		cin >> radius;

		// if else input validatation to check input greater than zero
		if (radius <= 0)
		{
			cout << "The radius cannot be less than or equal to zero!" << endl;
		}
		else
		{
			cout << "\nThe area is " << PI * radius * radius << endl;
		}

		break;

	case 2:
		double length, width;

		cout << "Enter the length: ";
		cin >> length;
		cout << "Enter the width: ";
		cin >> width;

		// if else input validatation to check input greater than zero
		if (length <= 0 || width <= 0)
		{
			cout << "The length or width cannot be less than or equal to zero!" << endl;
		}
		else
		{
			cout << "\nThe area is " << length * width << endl;
		}

		break;

	case 3:
		double base, height;

		cout << "Enter the length of the base: ";
		cin >> base;
		cout << "Enter the triangle's height: ";
		cin >> height;

		// if else input validatation to check input greater than zero
		if (base <= 0 || height <= 0)
		{
			cout << "The base or height cannot be less than or equal to zero!" << endl;
		}
		else
		{
			cout << "\nThe area is " << base * height * 0.5 << endl;
		}

		break;

	case 4:
		cout << "Leaving menu." << endl;

		break;

	default:
		cout << "You may only enter 1, 2, 3, or 4." << endl;

	}
		

	system("pause");
	return 0;
}
/*
Proof 1:
Geometry Calculator

1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter your choice(1 - 4) : 1
Enter the cirle's radius: 20

The area is 1256.64
Press any key to continue . . .
Proof 2:
Geometry Calculator

1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter your choice(1 - 4) : 2
Enter the length: 20
Enter the width: 15

The area is 300
Press any key to continue . . .
Proof 3:
Geometry Calculator

1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter your choice(1 - 4) : 3
Enter the length of the base: 10
Enter the triangle's height: 65

The area is 325
Press any key to continue . . .
Proof 4:
Geometry Calculator

1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter your choice(1 - 4) : 4
Leaving menu.
Press any key to continue . . .
Proof 5:
Geometry Calculator

1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter your choice(1 - 4) : 5
You may only enter 1, 2, 3, or 4.
Press any key to continue . . .
Proof 6:
Geometry Calculator

1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter your choice(1 - 4) : -5
You may only enter 1, 2, 3, or 4.
Press any key to continue . . .
Proof 7:
Geometry Calculator

1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter your choice(1 - 4) : 1
Enter the cirle's radius: -20
The radius cannot be less than or equal to zero!
Press any key to continue . . .
*/