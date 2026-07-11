# 469A - I Wanna Be the Guy

## Problem Statement

There are `n` game levels.

- Little X can complete some levels.
- Little Y can complete some levels.

Determine whether **together** they can complete **all** the levels.

- Print `"I become the guy."` if every level can be completed.
- Otherwise print `"Oh, my keyboard!"`.

---

## Simple Approach

Create a boolean array to keep track of completed levels.

- Whenever Little X can complete a level, mark it as visited.
- Do the same for Little Y.
- Finally, check whether every level from `1` to `n` has been visited.

If any level is not visited, print `"Oh, my keyboard!"`.
Otherwise, print `"I become the guy."`.

---

## Algorithm

1. Read `n`.
2. Create a boolean array `visited`.
3. Read Little X's levels and mark them as visited.
4. Read Little Y's levels and mark them as visited.
5. Check all levels from `1` to `n`:
   - If any level is not visited, print `"Oh, my keyboard!"`.
6. If all levels are visited, print `"I become the guy."`.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## Concepts Used

- Arrays
- Boolean Array
- Loops
- Conditions

---

## Tags

`Arrays` `Implementation` `800`