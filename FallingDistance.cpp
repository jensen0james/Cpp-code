/*
Student Name:  James Jensen
Date: 08/03/2022
Lab Assignment: Lab 07 - Ch6 Functions
Project Name: Lab07_01Proj
Description: This code accepts the falling time as an argument. The 
function should return the distance in meters for that time.
Credits: Not Applicable
*/
#include <iostream>
#include <iomanip>
using namespace std;

double fallingDistance(int time)
{
	const double GRAVITY = 9.8;

	double distance = 0.5 * GRAVITY * time * time;

	return distance;
}
int main()
{
	cout << "Seconds\t\t   Distance" << endl;
	cout << "===========================" << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t" << setw(12) << fallingDistance(i) << " meters" << endl;
	}
}
/*
Proof 1:
Seconds            Distance
===========================
1                4.9 meters
2               19.6 meters
3               44.1 meters
4               78.4 meters
5              122.5 meters
6              176.4 meters
7              240.1 meters
8              313.6 meters
9              396.9 meters
10               490 meters
*/
