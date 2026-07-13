# 266A - Stones on the Table

## Problem Statement

There are `n` stones placed in a row.

Each stone has one of the following colors:

- R (Red)
- G (Green)
- B (Blue)

Find the minimum number of stones to remove so that no two adjacent stones have the same color.

---

## Approach

Traverse the string from left to right.

If the current stone has the same color as the previous stone, increment the removal count.

---

## Algorithm

1. Read `n`.
2. Read the string.
3. Initialize `count = 0`.
4. Traverse from index `1` to `n-1`.
5. If `s[i] == s[i-1]`, increment `count`.
6. Print `count`.

---

## Example

Input

```
5
RRGGB
```

Output

```
2
```

Explanation

- Remove one `R`
- Remove one `G`

Remaining:

```
RGB
```

---

## Complexity Analysis

- Time Complexity: **O(n)**
- Space Complexity: **O(1)**

---

## Concepts Used

- Strings
- Traversal
- Counting

---

## Tags

`Strings` `Implementation` `800`