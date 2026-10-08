#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, weight;
};

int findParent(vector<int>& parent, int node) {
    if (parent[node] == node)
        return node;

    return parent[node] = findParent(parent, parent[node]);
}

void unionSets(vector<int>& parent, vector<int>& rank, int u, int v) {
    u = findParent(parent, u);
    v = findParent(parent, v);

    if (u != v) {
        if (rank[u] < rank[v])
            parent[u] = v;
        else if (rank[u] > rank[v])
            parent[v] = u;
        else {
            parent[v] = u;
            rank[u]++;
        }
    }
}

int main() {
    int vertices = 5;

    vector<Edge> edges = {
        {0, 1, 2},  // A-B
        {0, 2, 6},  // A-C
        {0, 3, 5},  // A-D
        {1, 3, 3},  // B-D
        {2, 3, 1},  // C-D
        {2, 4, 1},  // C-E
        {3, 4, 4}   // D-E
    };

    // Sort edges by weight
    sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
        return a.weight < b.weight;
    });

    vector<int> parent(vertices);
    vector<int> rank(vertices, 0);

    for (int i = 0; i < vertices; i++)
        parent[i] = i;

    int totalCost = 0;
    int edgesSelected = 0;

    cout << "Edges in Minimum Spanning Tree:\n";

    for (Edge edge : edges) {
        if (findParent(parent, edge.u) != findParent(parent, edge.v)) {

            cout << char('A' + edge.u) << " - "
                 << char('A' + edge.v) << " : "
                 << edge.weight << endl;

            totalCost += edge.weight;
            edgesSelected++;

            unionSets(parent, rank, edge.u, edge.v);

            if (edgesSelected == vertices - 1)
                break;
        }
    }

    cout << "Total Minimum Cost: " << totalCost << endl;

    return 0;
}
