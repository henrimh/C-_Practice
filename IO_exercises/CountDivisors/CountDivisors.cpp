//Exercise Description
/*
You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k. You do not need to print these numbers, you just have to find their count.

Input Format
The first and only line of input contains 3 space separated integers l, r and k.

Output Format
Print the required answer on a single line.
*/

#include <iostream>

using namespace std;

int main()
{
	int lowest, highest, divisor, answer = 0;

	cin >> lowest >> highest >> divisor;

	// A way to do this on a single line.
	answer = highest / divisor - lowest / divisor + (lowest % divisor == 0 ? 1 : 0);

	// Other way to do this. Fast with small numbers but very slow with big.
	/*
	for (int i = lowest; i <= highest; i++)
	{
		if (i % divisor == 0)
			answer++;
	}
	*/
	
	cout << answer;
	
	return 0;
}
