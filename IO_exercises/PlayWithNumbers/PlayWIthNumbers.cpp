#include <iostream>
#include <vector>

using namespace std;

// NOTE: Use fast I/O
int main()
{
	int n, queries, L, R, min;
	
	ios_base::sync_with_stdio(false); //Toggles off the sync of all standard c++ streams with corresponding standard C streams.
	cin.tie(NULL); 

	cin >> n >> queries;

	long long int* input = new long long int[n];

	// Construct a prefix array. 
	cin >> input[0];
	for (int i = 1; i < n; i++)
	{
		int x;
		cin >> x;
		input[i] = x + input[i-1];
	}
	
	for (int i = 0; i < queries; i++)
	{
		cin >> L >> R;
		/*if (R > n)
			R = n;

		min = input[L];

		for (int j = L; j < R; j++)
		{
			if (min > input[j])
				min = input[j];
		}

		cout << min << '\n';*/
	}

	delete[] input;

	return 0;
}