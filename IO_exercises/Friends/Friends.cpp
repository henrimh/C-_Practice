/*
Goki recently had a breakup, so he wants to have some more friends in his life. Goki has N people who he can be friends with, so he decides to choose among them according to their skills set Yi(1<=i<=n). He wants atleast X skills in his friends.
Help Goki find his friends.
*/
#include <iostream>

using namespace std;

int main()
{
	int n, minSkill, skill;

	cin >> n >> minSkill;

	for (int i = 0; i < n; i++)
	{
		cin >> skill; 

		if (skill >= minSkill)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}