# 467A - George and Accommodation

## Problem Statement

George wants to move into a room.

Each room contains:

- `p` = current number of people
- `q` = room capacity

George can move into a room only if **at least two spots are available**.

Find the number of rooms George can move into.

---

## Approach

For every room:

- Calculate the available space:
  ```
  q - p
  ```
- If the available space is at least `2`, count that room.

---

## Algorithm

1. Read `n`.
2. Initialize `count = 0`.
3. For each room:
   - Read `p` and `q`.
   - If `q - p >= 2`, increment `count`.
4. Print `count`.

---

## Example

Input

```
3
1 1
2 3
4 6
```

Output

```
1
```

Explanation

- Room 1 → 0 empty spaces ❌
- Room 2 → 1 empty space ❌
- Room 3 → 2 empty spaces ✅

Only one room satisfies the condition.

---

## Complexity Analysis

- Time Complexity: **O(n)**
- Space Complexity: **O(1)**

---

## Concepts Used

- Implementation
- Loops
- Conditions

---

## Tags

`Implementation` `Math` `800`s  