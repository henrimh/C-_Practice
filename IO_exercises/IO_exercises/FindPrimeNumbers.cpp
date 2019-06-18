#include <iostream>

using namespace std;

// Program prints all the primenumbers up to user input N
int main()
{
	int N;
	bool prime = true;

	cin >> N;

	for (int i = 2; i <= N; i++)
	{

		for (int j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				prime = false;
				break;
			}
		}

		if (prime == true)
			cout << i << " ";

		prime = true;
	}
}