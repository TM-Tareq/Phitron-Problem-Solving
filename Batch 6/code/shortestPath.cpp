#include<bits/stdc++.h>

using namespace std;

vector<int> shortestPath(int n, vector<vector<int>>& adj, int s, int t) {
    vector<int> dist(n, INT_MAX);
    vector<int> parent(n, -1);
    queue<int> q;
    
    dist[s] = 0;
    q.push(s);
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : adj[u]) {
            if (dist[v] == INT_MAX) {
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }
    
    vector<int> path;
    if (dist[t] == INT_MAX) return path;
    
    for (int v = t; v != -1; v = parent[v]) {
        path.push_back(v);
    }
    
    reverse(path.begin(), path.end());
    return path;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> adj(n);
    
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int s, t;
    cin >> s >> t;
    
    vector<int> path = shortestPath(n, adj, s, t);
    
    if (path.empty()) {
        cout << "No path found" << endl;
    } else {
        cout << "Shortest path: ";
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    }
    
 return 0;
}