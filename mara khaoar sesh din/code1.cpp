#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
#include <sstream>

using namespace std;

// Function to perform BFS and find the shortest path from source to destination
string findPath(const unordered_map<int, vector<int>>& graph, int source, int destination, int V) {
    // To track the parent of each node to reconstruct the path
    vector<int> parent(V, -1);
    // Queue for BFS
    queue<int> q;
    // Vector to track visited nodes
    vector<bool> visited(V, false);

    // Start BFS from the source node
    visited[source] = true;
    q.push(source);

    // BFS loop
    while (!q.empty()) {
        int node = q.front();
        q.pop();

        // If we reach the destination node, reconstruct the path
        if (node == destination) {
            string path = "";
            while (node != -1) {
                stringstream ss;
                ss << node;
                string nodeStr;
                ss >> nodeStr;
                path = nodeStr + " " + path;
                node = parent[node];
            }
            return path;
        }

        // Visit all neighbors of the current node
        for (int neighbor : graph.at(node)) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                parent[neighbor] = node;
                q.push(neighbor);
            }
        }
    }

    return "No path found";
}

int main() {
    int V, E;
    cin >> V >> E;

    // Create an adjacency list to represent the graph
    unordered_map<int, vector<int>> graph;

    // Read the edges and fill the adjacency list
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);  // Since the graph is undirected, add both directions
    }

    // Read the destination node
    int destination;
    cin >> destination;

    // Set the source node (assuming source node is 0)
    int source = 0;

    // Call the findPath function to get the shortest path
    string path = findPath(graph, source, destination, V);
    
    // Output the result
    cout << path << endl;

    return 0;
}
// path