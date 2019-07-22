// Problem description: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/minimise-cost-89b54cb9/description/
// tl;dr This program minimizes the absolute value (itseisarvo in finnish) of the array. The array has size N and only positive values may be moved to other indeces and only in range k.
// ! You can split numbers !
// For example array [3, -1, -2] with range k = 2. We can only move number 3. So we split it up and move 1 to array[1] and 2 to array[2]. So the Array becomes [0, 0, 0] thus making the absolute minimum value 0.
// Another example is array [1, 2, 3, -3, -2, -1] with k = 2, it's minimum absolute value is 2. (As it becomes [1, 0, 0, 0, 0, -1])
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
			continue;

		// If j has fallen out of range k. Move it back to the range.
		if (last_j <= i - k)
			last_j = i - k;

		// Transfer positive numbers to negative numbers slots
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
					break;
				}
			}

			last_j = j;
		}
	}

	//Count the absolute value of the array.
	for (int i = 0; i < arr.size(); i++)
	{
		out += abs(arr[i] + transfer[i]);
	}

	cout << out;
}