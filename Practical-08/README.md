# Practical 8: Breadth First Search (BFS)

## Aim

To implement the **Breadth First Search (BFS)** algorithm for traversing a graph.

## Problem Statement

Implement the Breadth First Search algorithm using a queue to visit all the vertices of a graph level by level.

## Algorithm

1. Start from the given source node.
2. Create an empty list called `visited` to keep track of visited nodes.
3. Create a queue and add the starting node.
4. While the queue is not empty:
   - Remove the first node from the queue.
   - If the node has not been visited:
     - Print the node.
     - Add the node to the visited list.
     - Add all its unvisited neighbouring nodes to the queue.
5. Continue until the queue becomes empty.
6. The printed nodes represent the BFS traversal of the graph.

## Input Graph

The graph used in this program is:

```text
        A
       / \
      B   C
     / \   \
    D   E   F
