#include <iostream>

using namespace std;

//Counts the sum of characters when a = 1 b = 2 etc.
int main()
{
	string input;
	int answer = 0;

	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		answer += input[i] - 'a' + 1;
	}

	cout << answer;

	return 0;
}