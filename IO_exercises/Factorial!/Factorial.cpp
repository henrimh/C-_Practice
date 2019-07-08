#include <iostream>

using namespace std;

int main()
{
	int input, factorial = 1;

	cin >> input;

	for (int i = 2; i <= input; i++)
	{
		factorial *= i;
	}

	cout << factorial;

	return 0;
}