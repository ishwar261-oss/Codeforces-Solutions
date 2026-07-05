# 617A - Elephant

## Problem Statement

An elephant wants to reach a friend's house located `x` units away.

The elephant can move exactly **1, 2, 3, 4, or 5** units in one step.

Find the minimum number of steps required to reach the destination.

---

## Approach

To minimize the number of steps, always take the maximum possible step (`5` units).

- If `x` is divisible by `5`, the answer is `x / 5`.
- Otherwise, one additional step is required.

---

## Algorithm

1. Read `x`.
2. If `x % 5 == 0`, print `x / 5`.
3. Otherwise, print `x / 5 + 1`.

---

## Complexity Analysis

- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Greedy
- Mathematics
- Integer Division

---

## Tags

`Math` `Greedy` `Implementation` `800`