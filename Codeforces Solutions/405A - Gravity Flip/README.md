# 405A - Gravity Flip

## Problem Statement

There are several columns of cubes.

When gravity changes direction, the cubes fall and rearrange themselves.

Your task is to print the heights of the columns after gravity acts.

---

## Observation

After gravity changes, the columns become sorted in **non-decreasing order**.

So the problem simply becomes sorting the array.

---

## Approach

1. Read the number of columns.
2. Store all column heights in an array.
3. Sort the array in ascending order.
4. Print the sorted array.

---

## Algorithm

1. Read `n`.
2. Read the array.
3. Sort the array.
4. Print the sorted array.

---

## Complexity Analysis

- **Time Complexity:** `O(n log n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Arrays
- Sorting
- STL `sort()`

---

## Tags

`Arrays` `Sorting` `Implementation` `800`