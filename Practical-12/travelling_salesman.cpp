#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int n = 4;
int minCost = INT_MAX;
vector<int> bestPath;

void tsp(vector<vector<int>>& graph, vector<bool>& visited,
         int current, int count, int cost, vector<int>& path) {

    if (count == n) {
        int totalCost = cost + graph[current][0];

        if (totalCost < minCost) {
            minCost = totalCost;
            bestPath = path;
            bestPath.push_back(0);
        }
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            path.push_back(i);

            tsp(graph, visited, i, count + 1,
                cost + graph[current][i], path);

            visited[i] = false;
            path.pop_back();
        }
    }
}

int main() {
    vector<vector<int>> graph = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    vector<bool> visited(n, false);
    vector<int> path;

    visited[0] = true;
    path.push_back(0);

    tsp(graph, visited, 0, 1, 0, path);

    cout << "Shortest Route: ";

    for (int city : bestPath) {
        cout << char('A' + city) << " ";
    }

    cout << "\nMinimum Travel Cost: " << minCost << endl;

    return 0;
}
