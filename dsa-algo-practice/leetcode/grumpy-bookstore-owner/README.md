# 1052. Grumpy Bookstore Owner

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-16T11:08:42.689Z
- Preptin problem: https://preptin.ai/problems/grumpy-bookstore-owner
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution uses a sliding window technique to find the maximum number of customers that can be satisfied by suppressing the grumpiness of the owner for a contiguous 'minutes' interval. It first calculates the maximum additional customers that can be satisfied during this interval and then adds this to the number of customers already satisfied when the owner is not grumpy.

## Complexity

- Time: O(n)
- Space: O(1)

## Signals

- Sliding Window
- Two Pointers
- Greedy
- array manipulation
