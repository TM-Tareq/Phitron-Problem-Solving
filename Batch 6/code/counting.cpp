#include<bits/stdc++.h>

using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

int countComponents(int n, vector<vector<int>>& adj) {
    vector<bool> visited(n, false);
    int components = 0;
    
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            dfs(i, adj, visited);
            components++;
        }
    }
    
    return components;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> adj(n);
    
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);  // For undirected graph
    }
    
    int components = countComponents(n, adj);
    cout << "Number of connected components: " << components << endl;
    
    return 0;
}