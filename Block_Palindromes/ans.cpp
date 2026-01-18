#include <bits/stdc++.h>
using namespace std;

int main()
{

    string c;
    cin >> c;
    int n = c.size();
    int count = 0, num = 0;

    for (auto i = 0; i < n - 1; i++)
    {
        if (c[i] != c[(n - 1) - i])
        {
            return count;
        }
    }

    count++;

    if (n == 2)
    {
        return count;
    }

    string preffix = c.substr(0, n / 2);
    string suffix = c.substr((n + 1) / 2, n / 2);

    for (auto i = 0; i < n; i++)
    {
        }

    return 0;
}