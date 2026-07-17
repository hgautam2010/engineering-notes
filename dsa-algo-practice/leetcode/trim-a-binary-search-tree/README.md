# 669. Trim a Binary Search Tree

Solved by @hx9sk4lhew

- Platform: leetcode
- Difficulty: Medium
- Language: cpp
- Solved at: 2026-07-17T14:08:01.535Z
- Preptin problem: https://preptin.ai/problems/trim-a-binary-search-tree
- Preptin profile: https://preptin.ai/u/hx9sk4lhew

## Approach

The solution recursively trims the binary search tree by removing nodes outside the [low, high] range. It leverages BST properties to prune left or right subtrees when node values are out of range.

## Complexity

- Time: O(n)
- Space: O(h) where h is the height of the tree, due to recursion stack

## Signals

- Divide and Conquer
- Tree Traversal
- Binary Search Tree
- Trees
- Tree Recursion
- Tree Pruning
