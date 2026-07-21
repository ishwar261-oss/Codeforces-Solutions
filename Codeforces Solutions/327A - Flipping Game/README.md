# 327A - Flipping Game

## Problem

You are given a binary array consisting of only `0`s and `1`s.

You are allowed to choose **exactly one continuous subarray** and flip every element in it:

- `0 → 1`
- `1 → 0`

Find the **maximum possible number of `1`s** after performing exactly one flip.

---

## Approach

- Count the total number of `1`s in the original array.
- Treat each `0` as `+1` because flipping it increases the number of `1`s.
- Treat each `1` as `-1` because flipping it decreases the number of `1`s.
- Apply **Kadane's Algorithm** to find the maximum gain from flipping a subarray.
- Add this maximum gain to the original count of `1`s.

---

## Algorithm

1. Read the array.
2. Count the number of `1`s.
3. Convert:
   - `0 → +1`
   - `1 → -1`
4. Run Kadane's Algorithm to find the maximum subarray sum.
5. Print `ones + maximumGain`.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## Concepts Used

- Arrays
- Greedy
- Kadane's Algorithm
- Maximum Subarray Sum

---

## Tags

`Array` `Kadane's Algorithm` `Greedy`