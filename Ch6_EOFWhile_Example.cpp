#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("InputEOFExample.dat");

	char data;

	if (!inFile)
	{
		cout << "Can't find file!" << endl;

		return 1;
	}

	inFile >> data; // Priming read

	while (inFile)
	{
		cout << data << endl;
		inFile >> data;
	}

	return 0;
}