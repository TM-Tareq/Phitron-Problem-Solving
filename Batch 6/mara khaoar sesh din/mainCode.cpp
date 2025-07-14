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
// path end



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


// topological sort start
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void topologicalSortUtil(int node, vector<vector<int>>& adj, vector<bool>& visited, stack<int>& topoStack) {
    // Mark the current node as visited
    visited[node] = true;

    // Recur for all the vertices adjacent to this node
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            topologicalSortUtil(neighbor, adj, visited, topoStack);
        }
    }

    // Push current node to stack which stores result
    topoStack.push(node);
}

void topologicalOrder(int n, vector<vector<int>>& adj) {
    vector<bool> visited(n, false);
    stack<int> topoStack;

    // Call the recursive helper function to store Topological Sort
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            topologicalSortUtil(i, adj, visited, topoStack);
        }
    }

    // Print the topological order
    cout << "Topological Order: ";
    while (!topoStack.empty()) {
        cout << topoStack.top() << " ";
        topoStack.pop();
    }
    cout << endl;
}

int main() {
    // Example: Create a directed acyclic graph (DAG) with 6 nodes (0 to 5)
    vector<vector<int>> adj(6);
    
    // Adding edges to the graph
    adj[5].push_back(2);
    adj[5].push_back(0);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);

    // Perform topological sort
    topologicalOrder(6, adj);

    return 0;
}




// indegree start
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

    int getIndegree(int node) {
        int in_degree = 0;
        for (int i = 0; i < V; i++) {
            for (int neighbor : adj[i]) {
                if (neighbor == node) {
                    in_degree++;
                }
            }
        }
        return in_degree;
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

    int node = 4; // Example node
    cout << "Indegree of node " << node << ": " << g.getIndegree(node) << endl;
    
    return 0;
}
