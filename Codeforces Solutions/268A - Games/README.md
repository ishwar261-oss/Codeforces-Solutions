# 268A - Games

## Problem

Each team has:

- Home jersey color
- Away jersey color

Count the number of matches where the **home jersey color of one team** is the same as the **away jersey color of another team**.

---

## Example

### Input

```text
3
1 2
2 4
3 4
```

### Output

```text
1
```

---

## Approach

- Store the home and away colors.
- Compare every team with every other team.
- If one team's home color matches another team's away color, increment the count.

---

## Algorithm

1. Read `n`.
2. Store each team's home and away colors.
3. Use two nested loops.
4. Compare:
   - `home[i] == away[j]`
5. Count all valid matches.
6. Print the answer.

---

## Complexity

- Time: **O(n²)**
- Space: **O(n)**

---

## Concepts

- Arrays
- Nested Loops
- Counting

---

## Tags

`Implementation` `Brute Force` `Arrays`