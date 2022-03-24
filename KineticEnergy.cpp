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

void kineticEnergy(double mass, double velocity, double& kEnergy, double& momentum)
{
	kEnergy = 0.5 * mass * velocity * velocity;
	momentum = mass * velocity;
}

int main()
{
	double mass, velocity, kEnergy, momentum;

	cout << "Enter the object's mass (in kg): ";
	cin >> mass;
	cout << "Enter the oject's velocity (in m/s): ";
	cin >> velocity;

	kineticEnergy(mass, velocity, kEnergy, momentum);

	cout << "Kinetic Energy =  " << kEnergy << endl;
	cout << "Momentum =  " << momentum << endl;

	system("pause");
	return 0;
}
/*
Proof 1:
Enter the object's mass (in kg): 75
Enter the oject's velocity (in m/s): 10
Kinetic Energy =  3750
Momentum =  750
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