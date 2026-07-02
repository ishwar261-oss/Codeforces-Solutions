# 158A - Next Round

## Problem

Given the scores of participants in a contest, determine how many participants advance to the next round.

A participant advances if:
- Their score is at least the score of the k-th participant.
- Their score is greater than 0.

## Topics

- Arrays
- Implementation

## Solution

### Approach

1. Read the number of participants `n` and the position `k`.
2. Store all participant scores.
3. Count how many scores are:
   - Greater than or equal to the k-th participant's score.
   - Greater than 0.
4. Print the count.

### Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

## Language

- C++

## Codeforces

https://codeforces.com/problemset/problem/158/A