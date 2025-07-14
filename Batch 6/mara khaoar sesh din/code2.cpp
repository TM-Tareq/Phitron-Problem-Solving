#include <iostream>
#include <vector>

using namespace std;

class Graph {
public:
    int V; // Number of vertices
    vector<vector<int>> adj; // Adjacency list

    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v); // Directed edge from u to v
    }

    int getOutdegree(int node) {
        return adj[node].size();
    }
};

int main() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(4, 5);

    int node = 1; // Example node
    cout << "Outdegree of node " << node << ": " << g.getOutdegree(node) << endl;
    
    return 0;
}
// outdegree end