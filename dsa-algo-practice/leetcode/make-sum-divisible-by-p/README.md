# Make Sum Divisible By P

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-09T11:38:52.572Z
- Preptin problem: https://preptin.ai/problems/make-sum-divisible-by-p
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution uses prefix sums and a hashmap to find the smallest subarray with a sum divisible by p. It calculates the total sum modulo p, then uses prefix sums modulo p and a map to find the shortest subarray to remove to make the entire array's sum divisible by p.

## Complexity

- Time: O(n)
- Space: O(n)

## Signals

- Prefix Sum
- Sliding Window
- hashing
- modular-arithmetic
- Number Theory
- Hash Maps
- prefix sums
- array manipulation
