
## 2. `kruskals.cpp`

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u;
    int v;
    int weight;
};

// Find the parent of a vertex
int findParent(vector<int>& parent, int vertex) {
    if (parent[vertex] == vertex)
        return vertex;

    return parent[vertex] = findParent(parent, parent[vertex]);
}

// Join two sets
void unionSets(vector<int>& parent, vector<int>& rank,
               int u, int v) {

    int rootU = findParent(parent, u);
    int rootV = findParent(parent, v);

    if (rootU != rootV) {
        if (rank[rootU] < rank[rootV]) {
            parent[rootU] = rootV;
        }
        else if (rank[rootU] > rank[rootV]) {
            parent[rootV] = rootU;
        }
        else {
            parent[rootV] = rootU;
            rank[rootU]++;
        }
    }
}

int main() {

    int vertices = 5;

    // Edges of the graph
    vector<Edge> edges = {
        {0, 1, 2}, // A-B
        {0, 2, 6}, // A-C
        {0, 3, 5}, // A-D
        {1, 3, 3}, // B-D
        {2, 3, 1}, // C-D
        {2, 4, 1}, // C-E
        {3, 4, 4}  // D-E
    };

    // Sort edges according to weight
    sort(edges.begin(), edges.end(),
         [](Edge a, Edge b) {
             return a.weight < b.weight;
         });

    vector<int> parent(vertices);
    vector<int> rank(vertices, 0);

    for (int i = 0; i < vertices; i++) {
        parent[i] = i;
    }

    int totalCost = 0;
    int edgeCount = 0;

    cout << "Edges in Minimum Spanning Tree:\n";

    for (Edge edge : edges) {

        int rootU = findParent(parent, edge.u);
        int rootV = findParent(parent, edge.v);

        if (rootU != rootV) {

            cout << char('A' + edge.u)
                 << " - "
                 << char('A' + edge.v)
                 << " : "
                 << edge.weight
                 << endl;

            totalCost += edge.weight;
            edgeCount++;

            unionSets(parent, rank, edge.u, edge.v);

            if (edgeCount == vertices - 1)
                break;
        }
    }

    cout << "Total Minimum Cost: "
         << totalCost << endl;

    return 0;
}
