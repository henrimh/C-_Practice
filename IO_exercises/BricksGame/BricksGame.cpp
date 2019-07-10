#include <iostream>

using namespace std;

int main()
{
	int bricks, i = 0;

	cin >> bricks;

	while (bricks > 0)
	{		
		bricks -= i * 1;
		if (bricks <= 0)
		{
			cout << "Patlu";
			break;
		}
		
		bricks -= i * 2;
		if (bricks <= 0)
			cout << "Motu";

		i++;
	}

	return 0;
}