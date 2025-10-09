#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count_u = 0, count_l = 0;

    cin >> s;

    for (auto c : s)
    {
        if (isupper(c))
        {
            count_u++;
        }
        else
        {
            count_l++;
        }
    }

    if (count_u == count_l)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else if (count_u > count_l)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;

    return 0;
}
