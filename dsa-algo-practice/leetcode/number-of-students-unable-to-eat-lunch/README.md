# Number Of Students Unable To Eat Lunch

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-06T10:43:52.899Z
- Preptin problem: https://preptin.ai/problems/number-of-students-unable-to-eat-lunch
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

Simulate the process of students taking sandwiches in a queue, rotating students who don't get their preferred sandwich until no more matches are possible.

## Complexity

- Time: O(n^2) in the worst case due to repeated cycling through the queue
- Space: O(n) for the queue and tracking arrays

## Signals

- Simulation
- Queue usage
- Queues
- Greedy
