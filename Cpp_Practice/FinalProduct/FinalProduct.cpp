#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//The program solves the final product of the input numbers modulus 10^9 +7.
int main() {

	int n;			// Number of inputs	
	int input;
	long long int answer = 1;
	long long int modulusValue = pow(10, 9) + 7;

	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		answer *= input;
		answer %= modulusValue;
	}

	cout << answer;
	return 0;
}