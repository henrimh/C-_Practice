/*
Given two strings of equal length, you have to tell whether they both strings are identical.

Two strings S1 and S2 are said to be identical, if any of the permutation of string S1 is equal to the string S2. See Sample explanation for more details.

Input :

First line, contains an intger 'T' denoting no. of test cases.
Each test consists of a single line, containing two space separated strings S1 and S2 of equal length.
Output:

For each test case, if any of the permutation of string S1 is equal to the string S2 print YES else print NO.
Constraints:

1<= T <=100
1<= |S1| = |S2| <= 10^5
String is made up of lower case letters only.

Note : Use Hashing Concept Only . Try to do it in O(string length) .
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int HashFunc(char c)
{
	return (c - 'a'); // Return number of the char in alphabet.
}

// This program takes n times 2 strings as input. 
// Then it checks if the two string are anagrams by checking the frequency of characters.
int main()
{

	int CharFrequencies_1[26] = { 0 }; // Array of "alphabet". Used to track frequency of individual characters in inputted words.
	int CharFrequencies_2[26] = { 0 };
	int n;
	string word, word2;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> word >> word2;

		for (unsigned int j = 0; j < word.length(); j++)
		{
			CharFrequencies_1[HashFunc(word[j])]++; // Increase the frequency of character 'j' by one.
			CharFrequencies_2[HashFunc(word2[j])]++;			
		}
		
		if (equal(CharFrequencies_1, CharFrequencies_1 + 26, CharFrequencies_2)) // Check if arrays are equal
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		
		for (int j = 0; j < 26; j++) // Reset the Arrays
		{
			CharFrequencies_1[j] = 0;
			CharFrequencies_2[j] = 0;
		}

	}


	return 0;
}