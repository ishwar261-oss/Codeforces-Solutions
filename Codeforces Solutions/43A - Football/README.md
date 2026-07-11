# 43A - Football

## Problem Statement

During a football match, every goal scored is recorded by the name of the team that scored it.

Given the sequence of goals, determine which team won the match.

It is guaranteed that one team has scored more goals than the other.

---

## Simple Approach

The problem guarantees that there are **only two different team names**.

1. Read the first team name.
2. Count how many times it appears.
3. Any different name belongs to the second team.
4. Count its occurrences.
5. Compare both counts.
6. Print the team with the higher count.

---

## Algorithm

1. Read `n`.
2. Read the first team name.
3. Set `firstCount = 1`.
4. Read the remaining team names:
   - If the name is the same as the first team, increment `firstCount`.
   - Otherwise, store it as the second team and increment `secondCount`.
5. Compare both counts.
6. Print the winner.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Strings
- Counting
- Loops
- Conditions

---

## Tags

`Strings` `Implementation` `800`