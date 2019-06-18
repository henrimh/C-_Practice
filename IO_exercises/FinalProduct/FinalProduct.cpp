#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//The program solves the final product of the input numbers modulus 10^9 +7.
int main() {
	
	int n;			// Number of inputs	
	long long int answer = 1;
	long long int modulusValue = pow(10, 9) + 7;
	
	string input;	// Input numbers with a space between them. ie. "1 2 3"
	string buffer;

	cin >> n;
	
	//input = new int[n];

	cin.ignore();	//Got to clear the next char in input stream. Which should be '\n'.

		// For future reference. The next two rows clear the whole input stream.
	//cin.clear();
	//cin.ignore(INT_MAX, '\n'); 

	getline(cin, input, '\n');

	// There most definitely is a better way to read the string than going character by character... :D
	for (unsigned int i = 0; i < input.length(); i++)
	{
		if (input[i] != 32) // 32 is ASCII value for " " (space)
		{
			buffer.append(input, i, 1);
		}
		else
		{
			answer *= stoi(buffer); //stoi converts string value to int

			answer = answer % modulusValue;

			buffer.clear();
		}
	}

	answer *= stoi(buffer);
	buffer.clear();
	answer = answer % modulusValue;


	cout << answer;
	return 0;
}