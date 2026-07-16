# 3867. Sum of GCD of Formed Pairs

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-16T06:36:40.814Z
- Preptin problem: https://preptin.ai/problems/sum-of-gcd-of-formed-pairs
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

Computes the greatest common divisor (GCD) of each element in the array with the maximum element found so far, sorts the modified array, then sums the GCDs of pairs from the start and end moving towards the center.

## Complexity

- Time: O(n log n) due to sorting; gcd operations are O(log(max element)) each, performed O(n) times.
- Space: O(1) additional space aside from input array; operations are done in-place.

## Signals

- Two Pointers
- Greatest Common Divisor
- Sorting
- GCD computation
- Sorting algorithms
- Two pointer technique
- In-place array manipulation
