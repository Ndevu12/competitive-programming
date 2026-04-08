#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> nodes;
vector<pair<int, int>> edges;
vector<vector<int>> adj;
int counter = 0;

void adjs()
{
    adj.resize(n + 1);
    for (auto &[u, v] : edges)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void dfs(int node, int parent, int consecutive)
{
    if (nodes[node] == 1)
    {
        consecutive++;
    }
    else
    {
        consecutive = 0;
    }

    if (consecutive > m)
    {
        return;
    }

    bool is_leaf = true;
    for (int next : adj[node])
    {
        if (next != parent)
        {
            is_leaf = false;
            dfs(next, node, consecutive);
        }
    }

    if (is_leaf)
    {
        counter++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    nodes.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> nodes[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    adjs();
    dfs(1, 0, 0);

    cout << counter << endl;
    return 0;
}