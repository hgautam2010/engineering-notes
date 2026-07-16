# 3754. Concatenate Non-Zero Digits and Multiply by Sum I

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-16T07:07:08.645Z
- Preptin problem: https://preptin.ai/problems/concatenate-non-zero-digits-and-multiply-by-sum-i
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution decomposes the input integer into its non-zero digits, reconstructs a new number consisting only of these non-zero digits in original order, sums these digits, and returns the product of the reconstructed number and the sum of its digits.

## Complexity

- Time: O(d) where d is the number of digits in the input number n.
- Space: O(1) using constant extra space for variables.

## Signals

- digit manipulation
- math
- integer digit extraction
- mathematical operations
