/*
Student Name:  James Jensen
Date: 01/02/2022
Lab Assignment: Lab 02 - Ch3 ExpressInteract
Project Name: Lab02_02Proj
Description: This code converts Celsius to Fahrenheit
Credits: Not Applicable
*/
#include <iostream>
using namespace std;

int main()
{
	double celsius;
	double celsiusToFahrenheit;

	cout << "Enter the temperature in Celsius that you wish to convert: ";
	cin >> celsius;

	celsiusToFahrenheit = celsius * 9.0 / 5.0 + 32;

	cout << celsius << " degrees Celsius is equal to " << celsiusToFahrenheit << " degrees Fahrenheit.\n";

	system("pause");
	return 0;
}
/*
Proof 1:
Enter the temperature in Celsius that you wish to convert: 100
100 degrees Celsius is equal to 212 degrees Fahrenheit.
Proof 2:
Enter the temperature in Celsius that you wish to convert: 0
0 degrees Celsius is equal to 32 degrees Fahrenheit.
Proof 3:
Enter the temperature in Celsius that you wish to convert: -40
-40 degrees Celsius is equal to -40 degrees Fahrenheit.
*/