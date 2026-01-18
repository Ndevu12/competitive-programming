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
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> orig(n), add(n, 0);
        vector<int> last(n, -1);

        for (int i = 0; i < n; i++)
        {
            cin >> orig[i];
        }

        int curVersion = 0;

        for (int i = 0; i < m; i++)
        {
            int b;
            long long c;
            cin >> b >> c;
            b--;

            if (last[b] != curVersion)
            {
                add[b] = 0;
                last[b] = curVersion;
            }

            add[b] += c;

            if (orig[b] + add[b] > h)
            {
                curVersion++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (last[i] == curVersion)
                cout << orig[i] + add[i] << " ";
            else
                cout << orig[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
