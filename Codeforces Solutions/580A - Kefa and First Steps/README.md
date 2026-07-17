# 580A - Kefa and First Steps

## Problem

Given an array of integers, find the length of the longest continuous non-decreasing subarray.

A non-decreasing subarray means:

```
a[i] <= a[i+1]
```

---

## Example

### Input

```
6
2 2 1 3 4 1
```

### Output

```
3
```

Explanation:

The longest non-decreasing subarray is:

```
1 3 4
```

Length = **3**

---

## Approach

- Start with a sequence length of `1`.
- Traverse the array.
- If the current element is greater than or equal to the previous one, extend the sequence.
- Otherwise, reset the sequence length to `1`.
- Update the maximum length after each step.

---

## Algorithm

1. Read `n`.
2. Read the array.
3. Initialize:
   - `current = 1`
   - `longest = 1`
4. Traverse from index `1` to `n-1`.
5. Extend or reset the current sequence.
6. Update the maximum length.
7. Print the answer.

---

## Complexity

- Time: **O(n)**
- Space: **O(1)**

---

## Concepts

- Arrays
- Greedy Traversal
- Implementation

---

## Tags

`Arrays` `Implementation`