#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty()) {

        // ber kore anbo
        int par = q.front();
        q.pop();

        // oi node ke niye kaj korbo
        cout << par << " ";

        // children gulo push korbo
        for(int child : adj_list[par]) {
            // cout << child << " ";
            if(vis[child] == false) {
                q.push(child);
                vis[child] = true;
            }
        }

    }
}

int main() {
    int n, e;
    cin >> n >> e;

    
    while(e--) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));

    bfs(0);

    return 0;
}