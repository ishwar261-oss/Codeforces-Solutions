# 344A - Magnets

## Problem

There are n magnets.

Each magnet is either:

10

or

01

Count the number of groups formed by consecutive magnets having the same orientation.

---

## Example

Input

6

10

10

01

01

10

10

Output

3

---

## Approach

- Read the first magnet.
- Start with one group.
- Compare each new magnet with the previous one.
- If they are different, increase the group count.

---

## Algorithm

1. Read n.
2. Read the first magnet.
3. Set groups = 1.
4. For each remaining magnet:
   - Read the current magnet.
   - If it differs from the previous one, increment groups.
   - Update the previous magnet.
5. Print the number of groups.

---

## Complexity

Time: O(n)

Space: O(1)

---

## Concepts

- Strings
- Simulation
- Counting

---

## Tags

`Strings` `Simulation` `Implementation`