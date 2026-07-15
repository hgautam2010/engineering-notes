# 3336. Find the Number of Subsequences With Equal GCD

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-15T11:54:12.455Z
- Preptin problem: https://preptin.ai/problems/find-the-number-of-subsequences-with-equal-gcd
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution uses a top-down dynamic programming approach with memoization to count the number of subsequence pairs in the array where the GCD of elements in both subsequences is equal and non-zero. It explores three options at each element: skip the current element, include it in the first subsequence, or include it in the second subsequence, updating the GCDs accordingly.

## Complexity

- Time: O(n * M * M), where n is the length of the input array and M is the max GCD value up to 200.
- Space: O(n * M * M) for the 3D DP memoization table.

## Signals

- Memoization
- Backtracking Search
- Dynamic Programming
- Greatest Common Divisor (GCD)
- Top-Down DP
- Subsequence Enumeration
- GCD properties
