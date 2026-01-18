#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a)
            cin >> x;

        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        int mex = 0;
        long long start = a[0];

        for (int i = 0; i < (int)a.size(); i++)
        {
            if (a[i] - start == i)
                mex++;
            else
                break;
        }

        cout << mex << "\n";
    }

    return 0;
}
