# 112A - Petya and Strings

## Problem

Given two strings, compare them without considering uppercase and lowercase letters.

Print:

- `-1` if the first string is smaller.
- `1` if the first string is greater.
- `0` if both strings are equal.

---

## Example

### Input

```
aaaa
aaaA
```

### Output

```
0
```

---

## Approach

- Convert both strings to lowercase.
- Compare them lexicographically.
- Print `-1`, `1`, or `0` based on the comparison.

---

## Algorithm

1. Read two strings.
2. Convert both to lowercase.
3. Compare the strings.
4. Print the result.

---

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`

---

## Concepts Used

- Strings
- Character Manipulation
- Lexicographical Comparison

---

## Tags

`Strings` `Implementation`