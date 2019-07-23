/*Description

{a,e,i,o,u,A,E,I,O,U}

Natural Language Understanding is the subdomain of Natural Language Processing where people used to design AI based applications have ability to understand the human languages. HashInclude Speech Processing team has a project named Virtual Assistant. For this project they appointed you as a data engineer (who has good knowledge of creating clean datasets by writing efficient code). As a data engineer your first task is to make vowel recognition dataset. In this task you have to find the presence of vowels in all possible substrings of the given string. For each given string you have to print the total number of vowels.



Input

First line contains an integer T, denoting the number of test cases.

Each of the next lines contains a string, string contains both lower case and upper case .

Output

Print the vowel sum
Answer for each test case should be printed in a new line.

Input Constraints

1<=T<=10

1<=|S|<=100000
*/
#include <iostream>
#include <array>

using namespace std;

array <char,10> vowels = { 'a','e','i','o','u','A','E','I','O','U' };

// This just checks if c is in vowels array.
bool isVowel (char c)
{
	for (int i = 0; i < vowels.size(); ++i)
	{
		if (c == vowels[i])
			return true;		
	}

	return false;
}

int main()
{
	string input;
	long long int nofVowels = 0;
	int n;

	cin >> n;
	
	for(int i = 0; i < n; ++i)
	{
		cin >> input;

		for (int j = 0; j < input.length(); ++j)
		{
			if (isVowel(input[j]))
				nofVowels += (long long int)((input.length() - j) * j + input.length() - j);	// This is an equation that counts all intances of char c in all the substrings of input.
																								// The logic behind it is that you multiply (length minus index) by chars before c. This is the nof substrings c appears in before it is the j'th char.
																								// Then we plus the amount of c 's own substrings to that number. And that's the amount of times c appears in all substrings.
		}
		
		cout << nofVowels << '\n';
		nofVowels = 0;
	}


	return 0;
}