#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*
Task description

You are conducting a contest at your college. This contest consists of two problems and  participants. You know the problem that a candidate will solve during the contest.

You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. Each problem must have a balloon associated with it as a prize for solving that specific problem. You can distribute balloons to each participant by performing the following operation:

Use green-colored balloons for the first problem and purple-colored balloons for the second problem
Use purple-colored balloons for the first problem and green-colored balloons for the second problem
You are given the cost of each balloon and problems that each participant solve. Your task is to print the minimum price that you have to pay while purchasing balloons.
*/

int main()
{
	int tests, green = 0, purple = 0, participants, pass1 = 0, pass2 = 0, result1, result2;
	bool test1, test2;

	cin >> tests; //Number of cases to run through

	for (int i = 0; i < tests; i++)
	{
		cin >> green >> purple; // Apparently you can do this... // When '\n' pressed the program takes istream. Then cin ignores spaces and takes the two numbers as separate inputs. 
		cin >> participants; // Number of participants in test i.

		for (int j = 0; j < participants; j++)
		{
			cin >> test1 >> test2;

			if (test1)
				pass1++;
			if (test2)
				pass2++;
		}

		result1 = pass1 * green + pass2 * purple; // Count the cost of balloons for both options
		result2 = pass1 * purple + pass2 * green;

		cout << min(result1, result2) << endl;

		pass1 = 0;
		pass2 = 0;
	}

	return 0;
}