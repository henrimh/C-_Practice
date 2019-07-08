#include <iostream>
#include <string>
using namespace std;

// Program takes a string input and tells the user if it's a palindrome.
int main()
{
	string input;

	cin >> input;

	int wordLength = input.length() - 1; // -1 Because for example word "ada" length is 3 but the iteration starts at 0 and ends at 2.
	int checkUntil = wordLength / 2; // We only need to check half of the letters from both ends of the word.

	for (int i = 0; i <= checkUntil; i++)
	{

		if (input[i] != input[wordLength - i]) // If the letters are different here, then the word is not a palindrome.
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}