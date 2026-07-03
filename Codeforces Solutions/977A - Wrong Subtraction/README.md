
# 977A - Wrong Subtraction

## Problem

Given an integer `n` and an integer `k`, perform the following operation exactly `k` times:

- If the last digit of `n` is not `0`, subtract `1` from `n`.
- Otherwise, divide `n` by `10`.

Print the final value of `n`.

---

## Topics

- Math
- Implementation
- Loops

---

## Solution

### Approach

1. Read the values of `n` and `k`.
2. Repeat the operation `k` times:
   - If the last digit is `0`, divide `n` by `10`.
   - Otherwise, decrement `n` by `1`.
3. Print the final value.

---

## Complexity

- **Time Complexity:** `O(k)`
- **Space Complexity:** `O(1)`

---

## Language

- C++
- Java

---

## Codeforces

https://codeforces.com/problemset/problem/977/A