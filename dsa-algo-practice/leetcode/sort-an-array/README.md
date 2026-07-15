# Sort an Array

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-13T20:16:11.609Z
- Preptin problem: https://preptin.ai/problems/sort-an-array
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution implements an in-place randomized three-way quicksort to sort the input vector. It partitions the array into elements less than, equal to, and greater than a randomly selected pivot and recursively sorts the partitions.

## Complexity

- Time: Average case: O(n log n); Worst case: O(n^2)
- Space: O(log n) due to recursion stack

## Signals

- Divide and Conquer
- Three-Way Partitioning
- Randomized QuickSort
- Sorting
- Recursion
- Randomization
- Partitioning
- In-place Modification
