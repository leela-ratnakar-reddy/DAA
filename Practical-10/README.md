# Practical 10: Kruskal's Algorithm

## Aim

To implement **Kruskal's Algorithm** to find the Minimum Spanning Tree (MST) of a connected, weighted, undirected graph.

## Problem Statement

Given a connected, weighted, undirected graph, implement Kruskal's Algorithm to find its Minimum Spanning Tree and calculate the total minimum cost.

## Algorithm

1. Represent the graph using a list of edges.
2. Sort all edges in ascending order according to their weights.
3. Start with an empty Minimum Spanning Tree.
4. Select the edge with the smallest weight.
5. Check whether adding the edge creates a cycle.
6. If it does not create a cycle, add the edge to the MST.
7. Continue until `V - 1` edges are selected.
8. Display the selected edges and the total minimum cost.

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
      |       |4
      |       |
      E -------
