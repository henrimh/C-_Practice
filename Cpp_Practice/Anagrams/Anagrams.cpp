#include <iostream>
#include <string>

using namespace std;


int AnagramCreator(string* input1, string* input2)
{
	int numErased = 0;

	//cout << input1[0] << endl << input2[1];

	for (int i = 0; i < input1->length(); i++)
	{
		for (int j = 0; j < input2->length(); j++)
		{
			if ((*input1)[i] == (*input2)[j])
			{
				input1->erase(input1->begin() + i);
				input2->erase(input2->begin() + j);
				i = -1;
				break;
			}
			else if (j == input2->length() - 1)
			{
				input1->erase(input1->begin() + i);
				numErased++;
				i = -1;
				break;
			}
		}
	}

	if (input1->length() == 0)
		numErased += input2->length();
	else if (input2->length() == 0)
		numErased += input1->length();

	return numErased;
}

int main() 
{
	int noi; //number of inputs
	//int input1Length;
	int numErased = 0;
	string str = "", str2 = "";
	string * input1 = &str, * input2 = &str2;

	cin >> noi;	

	for (int i = 0; i < noi; i++)
	{	
		cin >> *input1;
		cin >> *input2;

		numErased += AnagramCreator(input1, input2);

		//if(input1->empty() || input2->empty() != false) // If neither is empty. Run a check again.
			//numErased += AnagramCreator(input2, input1);

		cout << numErased << endl;
		numErased = 0;
	}
	return 0;
}

