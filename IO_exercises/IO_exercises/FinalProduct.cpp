#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string input;
	cin >> n;
	cin >> input;

	for (int i = 0; i < n * 2; i = i + 2)
	{
		cout << input[i];
	}
}