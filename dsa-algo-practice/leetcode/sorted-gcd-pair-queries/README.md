# 3312. Sorted GCD Pair Queries

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-18T19:39:46.079Z
- Preptin problem: https://preptin.ai/problems/sorted-gcd-pair-queries
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution calculates the frequency of divisors for all numbers in the input array, then uses an inclusion-exclusion principle to count pairs of elements with each possible gcd. It creates a prefix sum array of these pairs to answer multiple queries via binary search efficiently.

## Complexity

- Time: O(n * sqrt(max(nums))) for divisor counting + O(max(nums) log max(nums)) for inclusion-exclusion + O(q log max(nums)) for queries, where n is the size of nums and q is the number of queries.
- Space: O(max(nums)) for divisor frequency arrays and prefix sums.

## Signals

- Prefix Sum
- Binary Search
- Number Theory
- Greatest Common Divisor
- Inclusion-Exclusion Principle
- Divisor Frequency
- GCD Computation
- Prefix Sums
- Inclusion-Exclusion
