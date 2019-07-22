// Problem description: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/minimise-cost-89b54cb9/description/
#include <iostream>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	long long k, out = 0;
	int n, last_j = 0, j;
	cin >> n;
	cin >> k;

	vector<int> arr(n);
	vector<int> transfer(arr.size(), 0);

	for (int i_arr = 0; i_arr < n; i_arr++) // Get input
	{
		cin >> arr[i_arr];
	}

	for (int i = 0; i < arr.size(); ++i)
	{
		// If array number is negative. It cannot be transferred.
		if (arr[i] <= 0)
		{
			++j;
			continue;
		}

		for (j = last_j; j < arr.size() && j <= i + k; ++j)
		{

			if (arr[j] + transfer[j] < 0)
			{
				if (arr[i] >= abs(arr[j] + transfer[j]))
				{
					arr[i] -= abs(arr[j] + transfer[j]);
					transfer[j] += abs(arr[j] + transfer[j]);					
				}
				else
				{
					transfer[j] += arr[i];
					arr[i] = 0;

					if (j + 1 <= i - k)
						last_j = j;
					else
						last_j = (i - k <= 0 ? 0 : i - k);

					break;
				}
			}

			last_j = j;
		}
	}

	for (int i = 0; i < arr.size(); i++)
	{
		out += abs(arr[i] + transfer[i]);
	}

	cout << out;
}