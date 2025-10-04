#include <bits/stdc++.h>
using namespace std;

int num_of_solvable_problems(int numb, vector<vector<int>> problems)
{
    int final_count = 0;

    for (int i = 0; i < numb; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (problems[i][j] == 1)
            {
                count++;
            }
        }

        if (count >= 2)
        {
            final_count++;
        }
    }

    return final_count;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> p(n, vector<int>(3));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> p[i][j];
        }
    }

    cout << num_of_solvable_problems(n, p);

    return 0;
}
