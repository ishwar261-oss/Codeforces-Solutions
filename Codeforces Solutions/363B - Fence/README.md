# 363B - Fence

## Problem

There are `n` fence planks, each with a certain height.

Kirito wants to paint **exactly `k` consecutive planks**.

Find the **starting position (1-based index)** of the segment whose total height is the smallest.

---

## Approach

- Calculate the sum of the first `k` planks.
- Use a **sliding window** to move through the array.
- For each move:
  - Remove the leftmost element.
  - Add the new rightmost element.
- Keep track of the minimum sum and its starting index.

---

## Algorithm

1. Read `n` and `k`.
2. Compute the sum of the first `k` elements.
3. Slide the window from left to right.
4. Update the window sum in `O(1)` time.
5. If a smaller sum is found, update the answer.
6. Print the starting index (1-based).

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## Concepts Used

- Arrays
- Sliding Window
- Prefix Sum (Window Sum)
- Implementation

---

## Tags

`Array` `Sliding Window` `Prefix Sum`