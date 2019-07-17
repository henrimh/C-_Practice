/*
You are given an array of n numbers and q queries. For each query you have to print the floor of the expected value(mean) of the subarray from L to R.

First line contains two integers N and Q denoting number of array elements and number of queries.

Next line contains N space seperated integers denoting array elements.

Next Q lines contain two integers L and R(indices of the array).
*/
#include <iostream>
#include <vector>

using namespace std;

// NOTE: Use fast I/O
int main()
{
	int n, queries, L, R;
	
	ios_base::sync_with_stdio(false); //Toggles off the sync of all standard c++ streams with corresponding standard C streams.
	cin.tie(NULL); 

	cin >> n >> queries;
	n += 1; // plus one to n because the indeces asked start from 1... 

	long long int* input = new long long int[n];

	// Construct a prefix array. 
	input[0] = 0;
	for (int i = 1; i < n; i++)
	{
		int x;
		cin >> x;
		input[i] = x + input[i-1];
	}
	
	long long int answer;
	for (int i = 0; i < queries; i++)
	{
		cin >> L >> R;
		
		// count sum
		answer = input[R] - input[L - 1];

		answer = answer / (R - L + 1);	// divide by number of indeces counted to get mean (average)
							// C++ does flooring automatically

		cout << answer << '\n'; // '\n' is faster than endl because it doesn't force the flushing of stream.
	}

	delete[] input;

	return 0;
}