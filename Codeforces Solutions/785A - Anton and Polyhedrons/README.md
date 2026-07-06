# 785A - Anton and Polyhedrons

## Problem Statement

Anton has several polyhedrons.

Each type of polyhedron has a fixed number of faces:

- Tetrahedron → 4
- Cube → 6
- Octahedron → 8
- Dodecahedron → 12
- Icosahedron → 20

Given the names of the polyhedrons, calculate the total number of faces.

---

## Approach

Read each polyhedron name and add its corresponding number of faces to the total.

Use a series of `if-else` statements to match the name with its face count.

---

## Algorithm

1. Read the number of polyhedrons.
2. Initialize `faces = 0`.
3. For each polyhedron:
   - Read its name.
   - Add the corresponding number of faces.
4. Print the total number of faces.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Strings
- Mathematics
- Counting
- Loops

---

## Tags

`Math` `Strings` `Implementation` `800`