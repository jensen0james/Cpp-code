/*
Student Name:  James Jensen
Date: 03/03/2022
Lab Assignment: Lab 06 - Ch5 Looping
Project Name: Lab06_02Proj
Description: This program displays a pattern
Credits: Not Applicable
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 0; j != i; j++)
		{
			cout << "+";
		}
		cout << "\n";
	}
	cout << "\n";
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 10; j != i; j--)
		{
			cout << "+";
		}
		cout << "\n";
	}


	system("pause");
	return 0;
}

/*
Proof 1:
+
++
+++
++++
+++++
++++++
+++++++
++++++++
+++++++++
++++++++++

++++++++++
+++++++++
++++++++
+++++++
++++++
+++++
++++
+++
++
+
*/