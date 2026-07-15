# 3658. GCD of Odd and Even Sums

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-15T10:20:09.140Z
- Preptin problem: https://preptin.ai/problems/gcd-of-odd-and-even-sums
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

Calculates the sum of odd numbers as n^2 and the sum of even numbers as n*(n+1), then computes their greatest common divisor (GCD) using a custom recursive gcd function.

## Complexity

- Time: O(log(min(odd, even))) due to the GCD computation
- Space: O(log(min(odd, even))) due to recursion stack in GCD

## Signals

- Greatest Common Divisor
- Mathematical Summation
- Number Theory
- Recursion
- GCD Computation
