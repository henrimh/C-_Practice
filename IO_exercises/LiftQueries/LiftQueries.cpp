/*
There are 7 floors in BH3 and only 2 lifts. Initially Lift A is at the ground floor and Lift B at the top floor. Whenever someone calls the lift from N th floor, the lift closest to that floor comes to pick him up. If both the lifts are at equidistant from the N th floor, them the lift from the lower floor comes up.

INPUT

First line contains a integer T denoting the number of test cases.

Next T lines contains a single integer N denoting the floor from which lift is called.

OUTPUT

Output T lines containing one character "A" if the first lift goes to N th floor or "B" for the second lift.

CONTRAINTS

0 <= N <= 7

1 <= T <= 100000
*/

#include <iostream>
#include <cmath>

using namespace std;

void MoveA(int floor, int* a)
{
	cout << "A" << endl;
	*a = floor;
}

void MoveB(int floor, int* b)
{
	cout << "B" << endl;
	*b = floor;
}

int main()
{
	int n, floor = 0, aFloor = 0, bFloor = 7;
	int* a = &aFloor;
	int* b = &bFloor;
	int adist, bdist;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> floor;

		adist = abs(aFloor - floor);
		bdist = abs(bFloor - floor);

		if (adist == bdist)
		{
			if (aFloor < bFloor)
				MoveA(floor, a);
			else
				MoveB(floor, b);
		}
		else if (adist < bdist)
			MoveA(floor, a);
		else
			MoveB(floor, b);			
	}

	return 0;
}