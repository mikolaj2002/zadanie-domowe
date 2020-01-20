#include <iostream>
#include <vector>

using namespace std;

void moveOneLeft(vector<int>& tab)
{
	for (int i = 0; i < tab.size() - 1; i++)
		swap(tab[i], tab[i + 1]);
}

int main()
{
	int n, k;
	cin >> n >> k;
	k %= n;

	vector<int> tab;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		tab.push_back(temp);
	}

	for (int i = 0; i < k; i++)
		moveOneLeft(tab);

	for (auto n : tab)
		cout << n << " ";
	cout << endl;

	return 0;
}