#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int a, b;
		cin >> a >> b;

		while (a != 0 && b != 0 && a != b)
		{
			if (a > b)
				a -= b;
			else
				b -= a;
		}

		cout << a + b << endl;
	}

	return 0;
}
