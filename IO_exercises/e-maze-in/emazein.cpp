/*
Ankit is in maze. The command center sent him a string which decodes to come out from the maze. He is initially at (0, 0). String contains L, R, U, D denoting left, right, up and down. In each command he will traverse 1 unit distance in the respective direction.
For example if he is at (2, 0) and the command is L he will go to (1, 0).
1 ? |S| ? 200
*/#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int location[2] = { 0 };

	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		switch (input[i])
		{
		case 'L':
			location[0] -= 1;
			break;
		case 'R':
			location[0] += 1;
			break;
		case 'U':
			location[1] += 1;
			break;
		case 'D':
			location[1] -= 1;			
		}
	}

	cout << location[0] << " " << location[1];


	return 0;
}