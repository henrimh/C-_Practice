#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;

	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		if (islower(input[i]))	// If the char is lowercase
			input[i] = toupper(input[i]);	// Change it to uppercase
		else
			input[i] = tolower(input[i]);	// Else to lowercase. Easy.
	}

	cout << input;

	return 0;
}