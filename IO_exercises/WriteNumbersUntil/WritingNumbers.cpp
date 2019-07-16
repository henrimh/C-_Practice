/*
Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.
*/
#include <iostream>

using namespace std;

int main()
{
	int input;

	while (true)
	{
		cin >> input;
		if (input == 42)
			break;
		else
			cout << input << endl;

	}
	return 0;
}