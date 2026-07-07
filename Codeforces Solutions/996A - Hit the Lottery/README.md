# 996A - Hit the Lottery

## Problem Statement

A person wants to withdraw exactly `n` dollars from a bank.

The available banknote denominations are:

- 100
- 20
- 10
- 5
- 1

Find the minimum number of banknotes needed.

---

## Approach

Always use the largest possible denomination first.

- Take as many `100` dollar notes as possible.
- Then `20`, `10`, `5`, and finally `1`.

This greedy approach guarantees the minimum number of banknotes.

---

## Algorithm

1. Read `n`.
2. Count the number of `100` notes.
3. Repeat the process for `20`, `10`, `5`, and `1`.
4. Print the total number of notes.

---

## Complexity Analysis

- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Greedy
- Mathematics
- Integer Division

---

## Tags

`Math` `Greedy` `Implementation` `800`