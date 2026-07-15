# 3532. Path Existence Queries in a Graph I

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-09T09:37:57.450Z
- Preptin problem: https://preptin.ai/problems/path-existence-queries-in-a-graph-i
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution uses a Disjoint Set Union (DSU) data structure to efficiently group indices of the input array where adjacent elements differ by at most maxDiff. It uses a two-pointer technique to unite indices that satisfy this condition, and then queries whether two indices belong to the same connected component.

## Complexity

- Time: O(n + q * α(n)) where n is the length of nums and q is the number of queries; α(n) is the inverse Ackermann function, nearly constant, due to efficient DSU operations.
- Space: O(n + q) due to DSU parent and rank arrays and the output result vector for queries.

## Signals

- Union Find
- Two Pointers
- Connectivity
- Graph Connectivity
- Union-Find Data Structure
- Two Pointer Technique
