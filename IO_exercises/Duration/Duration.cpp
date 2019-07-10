/*
Rahul is a very busy persion he dont wan't to waste his time . He keeps account of duration of each and every work. Now he don't even get time to calculate duration of works, So your job is to count the durations for each work and give it to rahul.



Input:

First line will be given by N number of works
Next N line will be given SH,SM,EH and EM  each separated by space(SH=starting hr, SM=starting min, EH=ending hr, EM=ending min)
Output:

N lines with duration HH MM(hours and minutes separated by space)
*/
#include <iostream>

using namespace std;

int main()
{
	int n, sh, sm, eh, em, hours = 0, minutes = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> sh >> sm >> eh >> em;

		minutes = (eh * 60 + em) - (sh * 60 + sm);
		hours = minutes / 60;
		minutes %= 60;

		cout << hours << " " << minutes << endl;
	}

	return 0;
}