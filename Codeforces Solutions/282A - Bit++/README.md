# 282A - Bit++

## Problem

Initially, the variable `X` is equal to `0`.

You are given `n` statements. Each statement is one of the following:

- `++X`
- `X++`
- `--X`
- `X--`

For every increment statement, increase `X` by `1`.
For every decrement statement, decrease `X` by `1`.

Print the final value of `X`.

---

## Topics

- Strings
- Implementation
- Simulation

---

## Solution

### Approach

1. Initialize `X = 0`.
2. Read each statement.
3. Check the second character:
   - `'+'` → Increment `X`.
   - `'-'` → Decrement `X`.
4. Print the final value of `X`.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Language

- C++
- Java

---

## Codeforces

https://codeforces.com/problemset/problem/282/A