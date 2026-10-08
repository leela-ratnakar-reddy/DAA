# Practical 9: Prim's Algorithm

## Aim

To implement **Prim's Algorithm** to find the Minimum Spanning Tree (MST) of a connected, weighted, undirected graph.

## Problem Statement

Given a connected, weighted, undirected graph, implement Prim's Algorithm to find its Minimum Spanning Tree and calculate the total minimum cost.

## Algorithm

1. Start with any vertex.
2. Mark the starting vertex as visited.
3. Find the minimum-weight edge connecting a visited vertex to an unvisited vertex.
4. Add this edge to the Minimum Spanning Tree.
5. Mark the newly selected vertex as visited.
6. Repeat the process until all vertices are included in the MST.
7. Display the selected edges and the total minimum cost.

## Graph Used

The following weighted graph is used:

```text
        2
    A ------- B
    | \       |
   6|  \5     |3
    |   \     |
    C ------- D
      1       |
       \      |4
        \     |
          E
