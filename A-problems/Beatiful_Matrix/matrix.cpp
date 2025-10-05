#include <bits/stdc++.h>
using namespace std;

int steps(vector<vector<int>> matrix)
{
    int step_counts = 0, cols = 5, rows = 5;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 1)
            {
                if (i == 2 && j == 2)
                {
                    return step_counts;
                }
                else if (i == 2)
                {
                    step_counts += abs(j - 2);
                }
                else
                {
                    int current_row = abs(i - 2);
                    int current_col = abs(j - 2);
                    step_counts = current_col + current_row;
                }
            }
        }
    }
    return step_counts;
};

int main()
{
    vector<vector<int>> m(5, vector<int>(5));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> m[i][j];
        }
    }

    cout << steps(m);

    return 0;
}
