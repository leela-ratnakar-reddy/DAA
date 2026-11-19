# Practical 12: Travelling Salesman Problem

## Aim

To implement the Travelling Salesman Problem (TSP) using the Backtracking technique.

## Problem Statement

Given a set of cities and the distances between them, find the shortest possible route that visits every city exactly once and returns to the starting city.

## Algorithm

1. Start from the first city.
2. Mark the starting city as visited.
3. Visit an unvisited city and add its distance to the total cost.
4. Repeat until all cities have been visited.
5. Return to the starting city.
6. Calculate the total travel cost.
7. Compare all possible routes and select the route with minimum cost.
8. Display the shortest route and its minimum cost.

## Graph Used

A weighted graph containing four cities (A, B, C, D) is used.

## Time Complexity

**O(n!)**

Where:
- n = Number of cities

## Space Complexity

**O(n)**

## Language Used

C++

## Technique Used

Backtracking

## Files

```text
travelling_salesman.cpp
travelling_salesman_output.png
README.md
```

## Result

The Travelling Salesman Problem was successfully implemented in C++ to find the minimum-cost route that visits every city exactly once and returns to the starting city.
