# 546A - Soldier and Bananas

## Problem Statement

A soldier wants to buy `w` bananas.

- The first banana costs `k` dollars.
- The second banana costs `2 × k`.
- The third banana costs `3 × k`.
- ...
- The `w`-th banana costs `w × k`.

The soldier has `n` dollars.

Find how many more dollars the soldier needs to borrow. If he has enough money, print `0`.

---

## Approach

The total cost is the sum of:

`k + 2k + 3k + ... + wk`

Using the sum of the first `w` natural numbers:

`1 + 2 + ... + w = w(w + 1) / 2`

So,

`Total Cost = k × w × (w + 1) / 2`

If the total cost exceeds `n`, print the difference; otherwise, print `0`.

---

## Algorithm

1. Read `k`, `n`, and `w`.
2. Calculate the total cost.
3. If `total > n`, print `total - n`.
4. Otherwise, print `0`.

---

## C++ Solution

```cpp
#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int total = k * w * (w + 1) / 2;

    if (total > n)
        cout << total - n;
    else
        cout << 0;

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
- Arithmetic Progression
- Formula

---

## Tags

`Math` `Implementation` `800`