# Practical 11: Floyd-Warshall Algorithm

## Aim

To implement the Floyd-Warshall algorithm to find the shortest paths between all pairs of vertices in a weighted graph.

## Problem Statement

Given a weighted graph, implement the Floyd-Warshall algorithm using Dynamic Programming to calculate the shortest distance between every pair of vertices.

## Algorithm

1. Read the number of vertices and the adjacency matrix.
2. Initialize the distance matrix using the given adjacency matrix.
3. Consider each vertex as an intermediate vertex.
4. Update the shortest distance between every pair of vertices using the formula:

   `dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])`

5. Repeat the process for all intermediate vertices.
6. Display the final shortest-distance matrix.

## Graph Used

The following weighted graph is used:

```text
       5
   A ------ B
   |       /|
  10     3  |
   |    /   | 1
   |   /    |
   C ------ D
       2
```

## Time Complexity

**O(V³)**

Where:
- V = Number of vertices

## Space Complexity

**O(V²)**

## Language Used

C++

## Files

```text
floyd_warshall.cpp
floyd_warshall_output.png
README.md
```

## Result

The Floyd-Warshall algorithm was successfully implemented in C++ to find the shortest distances between all pairs of vertices in a weighted graph.
