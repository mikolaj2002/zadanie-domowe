#include <iostream>

using namespace std;

int euklides(int a, int b)
{
	if (a == 0 || b == 0 || a == b)
		return a + b;

	do
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	} while (a != 0 && b != 0 && a != b);

	return a + b;
}

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int a, b;
		cin >> a >> b;

		cout << euklides(a, b) << endl;
	}

	return 0;
}