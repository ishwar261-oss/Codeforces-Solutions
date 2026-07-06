        # 427A - Police Recruits

## Problem Statement

The police department receives a sequence of events.

- If the event is a positive integer, that many police officers are recruited.
- If the event is `-1`, a crime occurs.

A crime can be handled only if at least one police officer is available. Otherwise, the crime goes untreated.

Determine the total number of untreated crimes.

---

## Approach

Maintain two variables:

- `police` → Number of available police officers.
- `crimes` → Number of untreated crimes.

For each event:

- If the value is positive, add it to the available police officers.
- If the value is `-1`:
  - If a police officer is available, assign one officer to handle the crime.
  - Otherwise, increment the untreated crime count.

---

## Algorithm

1. Read the number of events.
2. Initialize `police = 0` and `crimes = 0`.
3. Traverse each event:
   - If the event is positive, increase `police`.
   - If the event is `-1`:
     - If `police > 0`, decrement `police`.
     - Otherwise, increment `crimes`.
4. Print the number of untreated crimes.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Arrays
- Simulation
- Counting
- Loops

---

## Tags

`Implementation` `Simulation` `Arrays` `800`