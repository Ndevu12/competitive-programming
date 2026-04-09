// Is for understanding the DFS process in detail, 
// but it had an inefficient adjacency list construction. 

// Look for optimized_dfs.cpp for a more efficient version that builds the adjacency list once and then uses it for DFS.

#include <bits/stdc++.h>
using namespace std;

vector<int> adj(int node, vector<pair<int,int>>& tp) {
    vector<int> neighbors;
    for (auto& edge : tp) {
        if (edge.first == node)
            neighbors.push_back(edge.second);
        else if (edge.second == node)
            neighbors.push_back(edge.first);
    }
    return neighbors;
}

void dfs(int node, vector<pair<int,int>>& tp, vector<bool>& visited) {
    visited[node] = true;
    cout << "Visiting: " << node << "\n";
    for (int neighbor : adj(node, tp)) {
        if (!visited[neighbor])
            dfs(neighbor, tp, visited);
    }
}

int main() {
    vector<pair<int,int>> tp = {{1,2},{1,3},{3,5},{2,4}};
    vector<bool> visited(6, false);
    dfs(1, tp, visited);
}
