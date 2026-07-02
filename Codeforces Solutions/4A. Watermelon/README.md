# 4A. Watermelon

> **Problem Link:** https://codeforces.com/problemset/problem/4/A

## Problem Statement

One hot summer day, Pete and Billy bought a watermelon weighing **w** kilograms.

They want to divide it into **two parts**, where:

- Each part has a **positive even weight**.
- Both parts together equal the original weight.

Determine whether such a division is possible.

---

## Approach

A watermelon can be divided into two positive even integers only if:

- Its weight is even.
- Its weight is greater than **2**.

If the weight is **2**, the only possible division is **1 + 1**, which does not satisfy the condition.

---

## Algorithm

1. Read the weight `w`.
2. Check if:
   - `w` is even.
   - `w > 2`.
3. If both conditions are true, print **YES**.
4. Otherwise, print **NO**.

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| **Time Complexity** | **O(1)** |
| **Space Complexity** | **O(1)** |

---

## Tags

- Math
- Implementation