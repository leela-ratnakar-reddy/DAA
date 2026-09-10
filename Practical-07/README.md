# Practical 7: Making Change Problem Using Dynamic Programming

## Aim

To implement the **Making Change Problem** using the **Dynamic Programming** technique.

## Problem Statement

Given a set of coin denominations and a target amount, find the **minimum number of coins** required to make the given amount.

## Algorithm

1. Read the coin denominations.
2. Read the target amount.
3. Create a DP array where `dp[i]` represents the minimum number of coins required to make amount `i`.
4. Initialize `dp[0] = 0` and all other values to infinity.
5. For every amount from `1` to the target amount:

   * Check every available coin.
   * If the coin value is less than or equal to the current amount, update the minimum number of coins.
6. The value `dp[target]` gives the minimum number of coins required.
7. Display the result.

## Example

Coins: `1, 2, 5, 10`
Amount: `18`

Minimum coins required:

`10 + 5 + 2 + 1 = 18`

Therefore, the answer is **4 coins**.

## Time Complexity

* **Time Complexity:** O(n × A)
* **Space Complexity:** O(A)

Where:

* `n` = number of coin denominations
* `A` = target amount

## Technology Used

* Python 3
* Dynamic Programming
