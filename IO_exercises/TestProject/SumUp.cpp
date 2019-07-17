#include <iostream>

using namespace std;

int main()
{
	double x = 1, n, y = 1;
	double factorial = 1;

	cout.precision(6);
	cout << fixed;

	cin >> n;

	if (n > 20)
		return 0;
	
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
		y *= 2;
		x += (y / factorial);		
	}

	cout << x;

	return 0;
}