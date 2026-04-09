// ./ simple_detailed_dfs.cpp was for understanding the DFS process in detail, but it had an inefficient adjacency list construction. 
// This version builds the adjacency list once and then uses it for DFS, which is more efficient.

#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adjList, vector<bool>& visited) {
    visited[node] = true;
    cout << "Visiting: " << node << "\n";
    for (int neighbor : adjList[node]) {
        if (!visited[neighbor])
            dfs(neighbor, adjList, visited);
    }
}

int main() {
    vector<pair<int,int>> tp = {{1,2},{1,3},{3,5},{2,4}};
    vector<vector<int>> adjList(6);

    // build once
    for (auto& edge : tp) {
        adjList[edge.first].push_back(edge.second);
        adjList[edge.second].push_back(edge.first);
    }

    vector<bool> visited(6, false);
    dfs(1, adjList, visited);
}