# 279B - Books

## Problem Statement

You have `n` books arranged in a row.

- The `i`-th book requires `a[i]` minutes to read.
- You have only `t` minutes available.

Find the **maximum number of consecutive books** you can read without exceeding the given time.

---

## Approach

Use the **Sliding Window (Two Pointers)** technique.

- Expand the window by moving the right pointer.
- Keep adding reading times.
- If the total time exceeds `t`, shrink the window from the left until it becomes valid again.
- Track the maximum window size.

---

## Algorithm

1. Read `n` and `t`.
2. Store all reading times in an array.
3. Initialize:
   - `left = 0`
   - `sum = 0`
   - `answer = 0`
4. Move the right pointer through the array:
   - Add the current book's reading time.
   - While `sum > t`:
     - Remove the leftmost book.
     - Move `left` forward.
   - Update the maximum window size.
5. Print the answer.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## Concepts Used

- Arrays
- Sliding Window
- Two Pointers
- Implementation

---

## Tags

`Two Pointers` `Sliding Window` `Arrays` `Implementation` `1200`