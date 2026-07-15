# 263A - Beautiful Matrix

## Problem

You are given a **5 × 5 matrix** containing exactly one `1` and all other elements are `0`.

In one move, you can swap the `1` with one of its adjacent cells (up, down, left, or right).

Find the minimum number of moves required to bring `1` to the center of the matrix `(2,2)`.

---

## Example

Input

0 0 0 0 0

0 0 0 0 1

0 0 0 0 0

0 0 0 0 0

0 0 0 0 0

Output

3

---

## Approach

- Traverse the matrix.
- Find the position of `1`.
- Calculate the distance from the center `(2,2)`.
- Print the total number of moves.

---

## Algorithm

1. Read the 5×5 matrix.
2. Store the row and column where `1` is found.
3. Calculate:

```
abs(row - 2) + abs(col - 2)
```

4. Print the answer.

---

## Complexity

Time: O(25)

Space: O(1)

---

## Concepts

- 2D Arrays
- Matrix Traversal
- Manhattan Distance

---

## Tags

`2D Arrays` `Implementation`