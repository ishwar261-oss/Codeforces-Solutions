# 231A - Team

## Problem Statement

Three friends (Petya, Vasya, and Tonya) are solving programming problems.

For each problem:
- Each friend is either **sure (1)** or **not sure (0)** about the solution.
- They will solve the problem only if **at least two friends are sure**.

Given the opinions of the three friends for each problem, determine how many problems they will solve.

---

## Approach

For every problem:

1. Read the three values (`0` or `1`).
2. Add them together.
3. If the sum is **2 or 3**, then at least two friends are sure.
4. Count such problems.
5. Print the final count.

---

## Algorithm

1. Read `n`.
2. Initialize `count = 0`.
3. Repeat `n` times:
   - Read `a`, `b`, and `c`.
   - If `a + b + c >= 2`, increment `count`.
4. Print `count`.

---

## Example

### Input

```
3
1 1 0
1 1 1
1 0 0
```

### Output

```
2
```

### Explanation

Problem 1:
```
1 + 1 + 0 = 2
```
✅ They solve it.

Problem 2:
```
1 + 1 + 1 = 3
```
✅ They solve it.

Problem 3:
```
1 + 0 + 0 = 1
```
❌ Not enough confidence.

Total solved = **2**

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Loops
- Conditions
- Counting
- Implementation

---

## Tags

`Implementation` `Math` `800`