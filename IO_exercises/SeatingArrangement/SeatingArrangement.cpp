#include <iostream>
#include <string>

using namespace std;

/*
Description of the exercise 
Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment.

So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows :

Window Seat : WS
Middle Seat : MS
Aisle Seat : AS

INPUT
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

***FINNISH***
Numerot 12 ja 6 pyörivät muutamassa kohtaa, koska tehtävän junassa loossit koostuvat 12 istumapaikasta. 
Vastakkaisia numeroita ovat 1 12, 2 11, 3 10, 4 9, 5 8, 6 7.

*/

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