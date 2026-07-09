# Make Sum Divisible By P

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-09T11:34:09.670Z
- Preptin problem: https://preptin.ai/problems/make-sum-divisible-by-p
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution uses prefix sums modulo p and a hashmap to find the shortest subarray whose removal makes the sum of the array divisible by p. It calculates cumulative sums modulo p and uses the hashmap to track indices of prefix sums to find a complement that forms a subarray with the required remainder.

## Complexity

- Time: O(n)
- Space: O(n)

## Signals

- Prefix Sum
- hash map usage
- modular arithmetic
- sliding window pattern
- Number Theory
- Sliding Window
- prefix sums
- hash table
