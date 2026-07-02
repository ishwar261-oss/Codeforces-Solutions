# 50A - Domino Piling

## Problem

Given an `m × n` board, determine the maximum number of `2 × 1` dominoes that can be placed without overlapping.

## Topics

- Math
- Implementation

## Solution

### Approach

1. Calculate the total number of cells: `m × n`.
2. Each domino covers exactly 2 cells.
3. The answer is the integer division of total cells by 2.

### Complexity

- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

## Language

- C++

## Codeforces

https://codeforces.com/problemset/problem/50/A