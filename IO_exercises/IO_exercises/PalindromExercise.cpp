#include <iostream>
#include <string>
using namespace std;

// Program takes a string input and tells the user if it's a palindrome.
int main()
{
	string input;

	cin >> input;

	int wordLength = input.length() - 1;
	int checkUntil = wordLength / 2;

	for (int i = 0; i <= checkUntil; i++)
	{

		if (input[i] != input[wordLength - i])
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;

	}
}