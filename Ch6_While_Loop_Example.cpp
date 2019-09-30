#include <iostream>

using namespace std;

int main()
{
	cout << "Counting program:\n";
	int count = 1;

	while (count <= 10)
	{
		cout << count++ << endl;
	}

	return 0;
}