# 520A - Pangram

## Problem

A string is called a **pangram** if it contains every letter of the English alphabet at least once.

Given a string, determine whether it is a pangram.

---

## Approach

- Convert each character to lowercase.
- Insert every character into a set.
- A set stores only unique characters.
- If the set size is `26`, print `YES`; otherwise, print `NO`.

---

## Algorithm

1. Read `n` and the string.
2. Convert each character to lowercase.
3. Insert each character into a set.
4. Check the size of the set.
5. Print the answer.

---

## Complexity

- **Time Complexity:** `O(n log 26)` ≈ `O(n)`
- **Space Complexity:** `O(26)` ≈ `O(1)`

---

## Concepts Used

- Strings
- Set (Unique Elements)
- Character Functions

---

## Tags

`Strings` `Set` `Implementation`