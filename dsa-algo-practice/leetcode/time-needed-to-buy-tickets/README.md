# Time Needed To Buy Tickets

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-06T10:53:24.566Z
- Preptin problem: https://preptin.ai/problems/time-needed-to-buy-tickets
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution simulates the process of buying tickets in order by summing the minimum of each person's ticket count and the target's ticket count or one less, depending on their position relative to the target. This calculates the total time taken for the person at index k to finish buying tickets.

## Complexity

- Time: O(n) where n is the number of people in the tickets vector, since the algorithm iterates over the vector once.
- Space: O(1) as it uses a fixed amount of extra space regardless of input size.

## Signals

- Simulation
- Greedy
- Min Function
- Iteration
