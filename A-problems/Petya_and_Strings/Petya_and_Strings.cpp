#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str1, str2;

	cin >> str1;
	cin >> str2;

	if (strcasecmp(str1.c_str(), str2.c_str()) == 0)
	{
		cout << 0 << endl;
	}
	else if (strcasecmp(str1.c_str(), str2.c_str()) > 0)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << -1 << endl;
	}

	return 0;
}
