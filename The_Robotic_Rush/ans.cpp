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
        int n, m, k;
        cin >> n >> m >> k;

        vector<long long> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        string dgdCode;
        cin >> dgdCode;

        vector<long long> delta(k + 1, 0);
        for (int i = 1; i <= k; i++)
        {
            delta[i] = delta[i - 1] + (dgdCode[i - 1] == 'R' ? 1 : -1);
        }

        unordered_map<long long, int> firstTime;
        firstTime.reserve(k * 2);
        for (int i = 0; i <= k; i++)
        {
            if (!firstTime.count(delta[i]))
            {
                firstTime[delta[i]] = i;
            }
        }

        const int INF = 1e9;
        vector<int> death(n, INF);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                long long need = b[j] - a[i];
                auto it = firstTime.find(need);
                if (it != firstTime.end())
                {
                    death[i] = min(death[i], it->second);
                }
            }
        }

        sort(death.begin(), death.end());

        int alive = n;
        int ptr = 0;

        for (int i = 1; i <= k; i++)
        {
            while (ptr < n && death[ptr] <= i)
            {
                alive--;
                ptr++;
            }
            cout << alive << " ";
        }
        cout << "\n";
    }

    return 0;
}
