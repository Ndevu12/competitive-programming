#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> cards(n);
	for (int i = 0; i < n; i++)
	{
		cin >> cards[i];
	}

	int sereja = 0, dima = 0;
	int l = 0, r = n - 1;
	bool serejas_turn = true;

	while (l <= r)
	{
		int pick;
		if (cards[l] > cards[r])
		{
			pick = cards[l];
			l++;
		}
		else
		{
			pick = cards[r];
			r--;
		}

		if (serejas_turn)
			sereja += pick;
		else
			dima += pick;

		serejas_turn = !serejas_turn;
	}

	cout << sereja << " " << dima << endl;
	return 0;
}
