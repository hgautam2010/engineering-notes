# 1081. Smallest Subsequence of Distinct Characters

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-06T10:18:51.427Z
- Preptin problem: https://preptin.ai/problems/smallest-subsequence-of-distinct-characters
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution uses a greedy algorithm with a stack to find the lexicographically smallest subsequence of the input string with all distinct characters. It tracks the last occurrence of each character to decide when a character can be removed from the subsequence stack if a lexicographically smaller character is found and can still appear later.

## Complexity

- Time: O(n)
- Space: O(1)

## Signals

- Stack
- Greedy
- Stacks
- Lexicographical ordering
- Last occurrence tracking
