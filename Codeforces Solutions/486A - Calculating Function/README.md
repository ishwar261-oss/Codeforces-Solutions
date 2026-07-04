# 486A - Calculating Function

## Problem Statement

Given an integer `n`, calculate the value of the following function:

- Subtract all odd numbers from `1` to `n`.
- Add all even numbers from `1` to `n`.

Return the resulting value.

---

## Approach

Instead of iterating from `1` to `n`, observe the pattern:

- If `n` is **even**, the answer is `n / 2`.
- If `n` is **odd**, the answer is `-(n + 1) / 2`.

This mathematical observation allows us to solve the problem in constant time.

---

## Algorithm

1. Read the integer `n`.
2. Check if `n` is even or odd.
3. If `n` is even, print `n / 2`.
4. Otherwise, print `-(n + 1) / 2`.

---

## C++ Solution

```cpp
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 2 == 0)
        cout << n / 2;
    else
        cout << -(n + 1) / 2;

    return 0;
}
```

---

## Complexity Analysis

- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Mathematics
- Pattern Observation
- Even and Odd Numbers

---

## Tags

`Math` `Implementation` `800`