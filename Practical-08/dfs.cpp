#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>& graph, int node, vector<bool>& visited) {
    visited[node] = true;

    cout << char('A' + node) << " ";

    for (int neighbour : graph[node]) {
        if (!visited[neighbour]) {
            dfs(graph, neighbour, visited);
        }
    }
}

int main() {
    vector<vector<int>> graph = {
        {1, 2},    // A
        {3, 4},    // B
        {5},       // C
        {},        // D
        {},        // E
        {}         // F
    };

    vector<bool> visited(graph.size(), false);

    cout << "DFS Traversal: ";
    dfs(graph, 0, visited);

    return 0;
}
