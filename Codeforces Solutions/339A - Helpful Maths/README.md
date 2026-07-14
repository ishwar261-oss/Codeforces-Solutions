# 339A - Helpful Maths

## Problem

You are given a string containing numbers separated by '+'.

Example:

3+2+1

Sort the numbers in increasing order and print them in the same format.

---

## Example

Input

3+2+1

Output

1+2+3

---

## Approach

- Traverse the string.
- Store only the digits.
- Sort the digits.
- Print them separated by '+'.

---

## Algorithm

1. Read the string.
2. Ignore '+' characters.
3. Store digits in a vector.
4. Sort the vector.
5. Print numbers with '+' between them.

---

## Complexity

Time: O(n log n)

Space: O(n)

---

## Concepts

- Strings
- Sorting
- Character Traversal

---

## Tags

`Strings` `Sorting` `Implementation`