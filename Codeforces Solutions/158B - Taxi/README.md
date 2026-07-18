# 158B - Taxi

## Problem

There are `n` groups of children.

Each taxi can carry at most **4** children.

Each group size is **1**, **2**, **3**, or **4**.

A group cannot be split into multiple taxis.

Return the minimum number of taxis needed.

---

## Example

### Input

```
5
1 2 4 3 3
```

### Output

```
4
```

---

## Approach

Count the number of groups of each size.

- Every group of 4 gets its own taxi.
- Pair each group of 3 with one group of 1.
- Pair groups of 2 together.
- If one group of 2 remains, combine it with up to two groups of 1.
- Put remaining groups of 1 four per taxi.

This greedy strategy minimizes the number of taxis.

---

## Algorithm

1. Count groups of size 1, 2, 3, and 4.
2. Add taxis for all groups of 4.
3. Add taxis for groups of 3 and pair them with groups of 1.
4. Pair groups of 2.
5. Handle one remaining group of 2.
6. Place remaining groups of 1 into taxis (4 per taxi).
7. Print the total number of taxis.

---

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`

---

## Concepts Used

- Greedy Algorithm
- Counting
- Arrays
- Implementation

---

## Tags

`Greedy` `Implementation`