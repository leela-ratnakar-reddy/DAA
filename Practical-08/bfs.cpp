#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<vector<int>>& graph, int start) {
    int n = graph.size();
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << char('A' + node) << " ";

        for (int neighbour : graph[node]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
            }
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

    cout << "BFS Traversal: ";
    bfs(graph, 0);

    return 0;
}
