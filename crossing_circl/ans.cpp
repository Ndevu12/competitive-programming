#include <bits/stdc++.h>
using namespace std;

int main()
{
    string cows;
    cin >> cows;
    int n = cows.size();

    map<char, pair<int, int>> positions;

    for (int i = 0; i < n; i++)
    {
        char cow = cows[i];
        if (positions.find(cow) == positions.end())
        {
            positions[cow].first = i;
        }
        else
        {
            positions[cow].second = i;
        }
    }

    int crossingPairs = 0;

    for (char a = 'A'; a <= 'Z'; a++)
    {
        for (char b = a + 1; b <= 'Z'; b++)
        {
            int a1 = positions[a].first;
            int a2 = positions[a].second;
            int b1 = positions[b].first;
            int b2 = positions[b].second;

            bool b1_between = (a1 < b1 && b1 < a2);
            bool b2_between = (a1 < b2 && b2 < a2);

            if (b1_between != b2_between)
            {
                crossingPairs++;
            }
        }
    }

    cout << crossingPairs << endl;

    return 0;
}
