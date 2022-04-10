#include <list>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream textFile;
	string fileName = "C:\\Users\\jense\\Downloads\\random.txt";
	int text;
	// A list is better for this problem than an array
	list <int> allText;
	int sum = 0;

	textFile.open(fileName);

	while (textFile >> text)
	{
		allText.push_back(text);
	}

	textFile.close();

	cout << "Number of numbers: " << allText.size() << endl;

	list <int> :: iterator i;
	for (i = allText.begin(); i != allText.end(); i++)
	{
		sum += *i;
	}

	cout << "Sum of the numbers: " << sum << endl;
	cout << "Average of the numbers: " << 1.0 * sum / allText.size() << endl;

	return 0;
}
