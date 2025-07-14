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





