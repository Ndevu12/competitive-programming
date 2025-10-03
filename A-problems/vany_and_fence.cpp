#include <bits/stdc++.h>
using namespace std;

int min_width(int n, int h, vector<int> &friends)
{
    int count_min_width = 0;

    for (int i = 0; i < n; i++)
    {
        if (friends[i] > h)
            count_min_width += 2;
        else
            count_min_width += 1;
    }

    return count_min_width;
}

int main()
{
    cout << "Inside the main function" << endl;

    int nth, height;
    cin >> nth >> height;

    vector<int> friends(nth);
    for (int i = 0; i < nth; i++)
    {
        cin >> friends[i];
    }

    cout << min_width(nth, height, friends);

    return 0;
}
