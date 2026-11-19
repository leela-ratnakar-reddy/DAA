#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define INF 99999

int main() {
    int n = 4;

    vector<vector<int>> dist = {
        {0, 5, 10, INF},
        {5, 0, 3, 1},
        {10, 3, 0, 2},
        {INF, 1, 2, 0}
    };

    // Floyd-Warshall Algorithm
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = min(dist[i][j],
                                     dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    // Display shortest distance matrix
    cout << "Shortest Distance Matrix:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
