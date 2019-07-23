/* Description
Dhananjay has recently learned about ASCII values.He is very fond of experimenting. With his knowledge of ASCII values and character he has developed a special word and named it Dhananjay's Magical word.

A word which consist of alphabets whose ASCII values is a prime number is an Dhananjay's Magical word. An alphabet is Dhananjay's Magical alphabet if its ASCII value is prime.

Dhananjay's nature is to boast about the things he know or have learnt about. So just to defame his friends he gives few string to his friends and ask them to convert it to Dhananjay's Magical word. None of his friends would like to get insulted. Help them to convert the given strings to Dhananjay's Magical Word.

Rules for converting:

1.Each character should be replaced by the nearest Dhananjay's Magical alphabet.

2.If the character is equidistant with 2 Magical alphabets. The one with lower ASCII value will be considered as its replacement.

Input format:

First line of input contains an integer T number of test cases. Each test case contains an integer N (denoting the length of the string) and a string S.

Output Format:

For each test case, print Dhananjay's Magical Word in a new line.

Constraints:

1 <= T <= 100

1 <= |S| <= 500
*/
//tl;dr The program converst a string of alphabet characters to a "magic word which only uses characters which ASCII codes are prime numbers
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> PrimeChars;

void ConstructPrimeCharVector()
{
	bool prime = true;	

	//Uppercase
	for (int i = 'A'; i <= 'Z'; ++i)
	{
		for (int j = 2; j <= i / 2; ++j)
		{
			if (i % j == 0)
			{
				prime = false;
				break;
			}
		}

		if (prime)
			PrimeChars.push_back(i);

		prime = true;
	}

	prime = true;

	for (int i = 'a'; i <= 'z'; ++i)
	{
		for (int j = 2; j <= i / 2; ++j)
		{
			if (i % j == 0)
			{
				prime = false;
				break;
			}
		}

		if (prime)
			PrimeChars.push_back(i);

		prime = true;
	}
}

void SolveMagicWord(int wordLength, string word)
{
	string magicWord = "";
	int minDist = 999, dist, minIndex = 0;

	for (int i = 0; i < wordLength; ++i)
	{
		// Lookup the closest prime char
		for (int j = 0; j < PrimeChars.size(); ++j)
		{
			dist = abs(PrimeChars[j] - word[i]);

			if (minDist > dist)
			{
				minDist = dist;
				minIndex = j;
			}
		}

		magicWord.push_back(PrimeChars[minIndex]);
		minDist = 999;
	}

	cout << magicWord << '\n';
}

int main()
{
	string word;
	int tests, n;

	// Prime ASCII chars to vector
	ConstructPrimeCharVector();

	cin >> tests;
	
	for (int i = 0; i < tests; ++i)
	{
		cin >> n >> word;

		// Solve the word
		SolveMagicWord(n, word);
	}

	return 0;
}