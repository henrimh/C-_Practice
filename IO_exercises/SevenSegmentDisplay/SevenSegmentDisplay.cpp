//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seven-segment-display-nov-easy-e7f87ce0/
/*
Alice got a number written in seven segment format where each segment was creatted used a matchstick.

Example: If Alice gets a number 123 so basically Alice used 12 matchsticks for this number.

Alice is wondering what is the numerically largest value that she can generate by using at most the matchsticks that she currently possess.Help Alice out by telling her that number.



Input Format:

First line contains T (test cases).

Next T lines contain a Number N.

Output Format:

Print the largest possible number numerically that can be generated using at max that many number of matchsticks which was used to generate N.
*/
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int n, nofSticks = 0, x;
	int sticks[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
	string testNum, answer = "";
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		
		cin >> testNum;

		//Solve num of sticks in testNumber
		for (int j = 0; j < testNum.size(); ++j)
		{
			x = testNum[j] - '0';
			nofSticks += sticks[x];
		}

		if (nofSticks % 2 == 1)
		{
			answer.append("7");
			nofSticks -= 3;
		}

		for (int j = 0; j < nofSticks / 2; ++j)
		{
			answer.append("1");
		}
		
		cout << answer << endl;
		
		answer = "";
		nofSticks = 0;
	}

	return 0;
}