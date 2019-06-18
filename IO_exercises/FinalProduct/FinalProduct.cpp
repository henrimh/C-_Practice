#include <iostream>
#include <string>

using namespace std;

//The program solves the final product of the input numbers.
int main() {
	
	int n;			// Number of inputs	
	string input;	// Input numbers with a space between them. ie. "1 2 3"

	cin >> n;

	//K‰yt‰ yht‰ seuraavista clearaus metodeista.
	// selvit‰ miten jokainen toimii.

	//cin.seekg(0, ios::end); // Clearaa j‰lkeen p‰in
	cin.clear();
	//cin.ignore(INT_MAX, '\n'); // Clearaa ennen t‰t‰. 
	
	//cin.get(); //toimii yksin‰‰n streamin tyhj‰‰miseen

	getline(cin, input);

	for (int i = 0; i < n * 2 - 1; i += 2)
	{
		cout << i;
		cout << input[i] << endl;
		//i = i + 2;
	}
}