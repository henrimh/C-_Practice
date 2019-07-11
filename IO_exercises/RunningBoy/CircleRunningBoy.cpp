/*
On a distant planet far away from Earth lives a boy named Aman.He loves to run everyday.But his running distance is directly affected by how much horlicks his mother mixed in his milk today.If his mother has mixed x grams of horlicks,then Aman will be capable of running 100*x meters at most on that day.

Aman's instructor, Mr.Sharma ,is a very strict yet very caring.Everyday he asks Aman to run around a circle of radius r once.If Aman is able to complete the circle,he would get a toffee.

Note:Take value of pie=22/7.

CONSTRAINTS:

1<=d<105

1<=r<106

1<=x<=104

INPUT:

First line contains d,no. of days Aman goes to his instructor.Next d lines each contain r,radius of circle and x,amount of horlicks.

OUTPUT:

Print total number of toffees Aman would finally have at the end of d days.
*/
#include <iostream>

using namespace std;

int main()
{
	int n, toffees = 0, radius, circumference, horlicks = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> radius >> horlicks;

		circumference = 2 * 22 * radius; // 22 here is pi without the divider

		if (circumference <= (100 * horlicks * 7)) // And when not dividing 22. I need to multiple the running distance by 7. 
			toffees++;								// By leaving the pi out we lose the possibility of floating point problems etc. // Had to do this because the code wouldn't go throught on the site. Hackerearth.
	}

	cout << toffees;

	return 0;
}