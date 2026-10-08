#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void prims(vector<vector<int>>& graph) {
    int n = graph.size();

    vector<int> key(n, INT_MAX);
    vector<bool> visited(n, false);
    vector<int> parent(n, -1);

    key[0] = 0;

    for (int count = 0; count < n - 1; count++) {
        int u = -1;

        // Find the unvisited vertex with minimum key value
        for (int i = 0; i < n; i++) {
            if (!visited[i] && (u == -1 || key[i] < key[u])) {
                u = i;
            }
        }

        visited[u] = true;

        // Update key values of adjacent vertices
        for (int v = 0; v < n; v++) {
            if (graph[u][v] != 0 &&
                !visited[v] &&
                graph[u][v] < key[v]) {

                key[v] = graph[u][v];
                parent[v] = u;
            }
        }
    }

    int totalCost = 0;

    cout << "Edges in Minimum Spanning Tree:\n";

    for (int i = 1; i < n; i++) {
        cout << char('A' + parent[i])
             << " - "
             << char('A' + i)
             << " : "
             << graph[i][parent[i]]
             << endl;

        totalCost += graph[i][parent[i]];
    }

    cout << "Total Minimum Cost: " << totalCost << endl;
}

int main() {

    // Weighted undirected graph
    //
    //        2
    //    A ------- B
    //    | \       |
    //   6|  \5     |3
    //    |   \     |
    //    C ------- D
    //      1       |
    //       \      |4
    //        \     |
    //          E
    //
    // Note: C-D has weight 1 and D-E has weight 4.

    vector<vector<int>> graph = {
        // A  B  C  D  E
        {0, 2, 6, 5, 0}, // A
        {2, 0, 0, 3, 0}, // B
        {6, 0, 0, 1, 1}, // C
        {5, 3, 1, 0, 4}, // D
        {0, 0, 1, 4, 0}  // E
    };

    prims(graph);

    return 0;
}
