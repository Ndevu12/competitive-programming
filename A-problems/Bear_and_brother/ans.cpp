#include <bits/stdc++.h>
using namespace std;

int main()
{
	int l, b, year = 1;
	cin >> l >> b;

	int ld = l * 3;
	int bd = b * 2;

	if (ld > bd)
	{
		cout << year << "\n";
		return 0;
	}

	while (ld <= bd)
	{
		year++;
		ld *= 3;
		bd *= 2;
	}

	cout << year << "\n";
	return 0;
}
