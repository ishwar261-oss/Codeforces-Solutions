# 581A - Vasya the Hipster

## Problem Statement

Vasya has:

- `a` red socks
- `b` blue socks

Every day he wears one pair of socks.

- A pair with different colors is called a **fashionable day**.
- Two socks of the same color make an **ordinary day**.

Find:

1. Maximum number of fashionable days.
2. Maximum number of ordinary days after that.

---

## Approach

- Every fashionable day uses one red and one blue sock.
- Therefore, the number of fashionable days is the smaller of `a` and `b`.
- After making all fashionable pairs, only one color of socks remains.
- Two remaining socks make one ordinary day.

---

## Algorithm

1. Read `a` and `b`.
2. Find `different = min(a, b)`.
3. Find remaining socks:
   - `remaining = max(a, b) - different`
4. Ordinary days:
   - `same = remaining / 2`
5. Print `different` and `same`.

---

## Example

Input

```
3 1
```

Output

```
1 1
```

Explanation

- Day 1: Red + Blue → Fashionable
- Remaining socks: 2 Red
- Day 2: Red + Red → Ordinary

---

## Complexity Analysis

- Time Complexity: O(1)
- Space Complexity: O(1)

---

## Concepts Used

- Math
- Greedy
- min()
- max()

---

## Tags

`Math` `Greedy` `800`