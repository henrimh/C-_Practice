#include <iostream>
#define LLONG_MIN -2147483647 // Had to be defined for HackerEarth site

using namespace std;

// Create prefix array 
// Count to the biggest index you can get like 1 -> 3 -> 6 -> 10 -> 15 -> 21
// Take that indexes number minus the one before your starting index and thats the indexes value
// Search the biggest value among indeces values.
// URL to problem https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/best-index-1-45a2f8ff/
int main()
{
	int n, increment, lastPossible;
	long long int biggest = LLONG_MIN, x;

	cin >> n;

	long long int* arr = new long long int[n];

	for (int i = 0; i < n; i++) // take the input and construct a prefix array
	{
		cin >> arr[i];

		if (i > 0)
			arr[i] = arr[i] + arr[i - 1];
	}

	for (int i = 0; i < n; i++) // check greatest possible index for every starting index
	{		
		increment = 1, lastPossible = 0;

		for (int j = 0; i + j < n; j += increment) // when the greatest index is reached, take note of it.
		{
			lastPossible = j;
			increment++;
		}
			
		x = arr[i + lastPossible] - ((i == 0) ? 0 : + arr[i - 1]); // count that indexes value

		if (x > biggest)
			biggest = x; 
	}

	cout << biggest << endl;
}

// The same program but without prefix array. This takes MUUUUCH more time and memory.
/*
int main()
{
	int n, greatest = 0;
	
	cin >> n;

	int * arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) // starting to check for index i
	{
		int x = arr[i];
		int increment = 1;

		for (int j = increment; i + j < n; j += increment)
		{
			increment++;

			if (j + i + increment > n)
				break;

			for (int k = 0; k < increment; k++) // Add the next j elements 
			{
				x += arr[i + j + k];
			}
			
		}

		if (x > greatest)
			greatest = x;
	}

	cout << greatest << endl;

	delete[] arr;

	return 0;
}*/