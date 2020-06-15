#include <iostream>
#include <string>

using namespace std;

void wypisz(string s)
{
	int i = 0;
	while (s[i] == 1)
		i++;
	if (s[i] != 0)
	{
		cout << s[i];
		s[i] = (char)1;
		wypisz(s);
	}
}

int main()
{
	string napis;
	cout << "Podaj napis: ";
	getline(cin, napis);

	wypisz(napis);

	return 0;
}