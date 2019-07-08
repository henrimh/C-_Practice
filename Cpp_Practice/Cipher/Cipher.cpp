#include <iostream>
#include <string>

using namespace std;

char Encode(char x, int cipher)
{
	char begin, delimiter;
	if (isalnum(x))
	{
		if (isalpha(x))
		{
			cipher %= 26;
			if (isupper(x))
			{
				begin = 'A';
				delimiter = 'Z';
			}
			else
			{
				begin = 'a';
				delimiter = 'z';
			}
		}
		else
		{
			cipher %= 10;
			begin = '0';
			delimiter = '9';
		}
	}
	else
		return x;

	for (int i = 0; i < cipher; i++)
	{
		if (x == delimiter)
			x = begin;
		else
			x++;
	}

	return x;
}

int main()
{
	string input, ciphered = "";
	int cipher;

	cin >> input;
	cin >> cipher;

	for (int i = 0; i < input.length(); i++)
	{
		ciphered.push_back(Encode(input[i], cipher));
	}


	cout << ciphered;

	return 0;
}
