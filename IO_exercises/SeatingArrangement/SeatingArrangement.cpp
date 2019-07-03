#include <iostream>
#include <string>

using namespace std;

string SolveType(int x)
{
	x %= 6;
	string type = "default";

	switch (x)
	{
	case 0:
	case 1:
		type = "WS";
		break;

	case 2:
	case 5:
		type = "MS";
		break;

	case 3:
	case 4:
		type = "AS";
		break;
	}

	return type;
}

int SolveFacingSeat(int seatNum)
{
	int x = seatNum % 12;
	
	if (x == 0)
		x = 12;

	seatNum += (6 - x) * 2 + 1;

	return seatNum;
}

int main()
{
	int n, seat, answer = 1;
	string type = "";

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> seat;
		
		type = SolveType(seat);
		
		answer = SolveFacingSeat(seat);

		cout << answer << " " << type << endl;
	}


	return 0;
}