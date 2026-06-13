# Unique Values (Hard Version)

Solved by @himanshu

- Platform: codeforces
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-06-13T10:36:04.000Z
- Preptin problem: https://preptin.ai/problems/codeforces-2219-b2
- Preptin profile: https://preptin.ai/u/himanshu

## Approach

The solution uses a binary search combined with parity checks via interactive queries to find three specific indices within an array of size n=2k+1. It incrementally searches three segments by halving the search space based on parity results to determine positions.

## Complexity

- Time: O(T * 3 * log n)
- Space: O(1)

## Signals

- Binary Search
- interactive problem
- parity
- Number Theory
- interactive coding
- parity check
