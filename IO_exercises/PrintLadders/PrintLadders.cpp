
#include <iostream>

using namespace std;

int main()
{
	int n;
	string nostep = "*   *", step = "*****";

	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cout << nostep << endl;
		cout << nostep << endl;
		cout << step << endl;
	}
	cout << nostep << endl;
	cout << nostep << endl;

	return 0;
}