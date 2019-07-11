/*
He knows that a tag is valid if the sum of every two consecutive digits of it is even and its letter is not a vowel. Determine if the tag of the truck is valid or not.

We consider the letters "A","E","I","O","U","Y" to be vowels for this problem.

Input Format

The first line contains a string of length 9. The format is "DDXDDD-DD", where D stands for a digit (non zero) and X is an uppercase english letter.

Output Format

Print "valid" (without quotes) if the tag is valid, print "invalid" otherwise (without quotes)
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	string input, answer = "valid", invalid = "invalid";
	char vowels[6] = { 'A', 'E', 'I', 'O', 'U', 'Y' };
	vector<char> vv(vowels, vowels + 6);

	cin >> input;
	
	if (!binary_search(vv.begin(), vv.end(), input[2]))
	{
		for (int i = 0; i + 1 < input.length(); i++)
		{
			if (isdigit(input[i]) && isdigit(input[i+1]))
			{
				if ((input[i] + input[i+1]) % 2 == 1)
				{
					answer = invalid;
					break;
				}
			}
		}
	}
	else
		answer = invalid;

	cout << answer;

	return 0;

}