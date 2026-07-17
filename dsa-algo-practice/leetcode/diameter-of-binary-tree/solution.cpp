/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    pair<int, int> diameter(TreeNode* root) {
        if (root == nullptr) {
            return {0, 0};
        }

        // first = height, second = diameter of child
        pair<int, int> left, right;

        left = diameter(root->left);
        right = diameter(root->right);

        int diameterWithCurrent = left.first + right.first + 1;

        return { max(left.first, right.first) + 1,
                max(max(left.second, right.second), diameterWithCurrent)};
    }
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int, int> result = diameter(root);

        return max(result.first, result.second) - 1;
    }
};
