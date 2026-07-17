/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int low;
    int high;
    TreeNode* trim(TreeNode* root) {
        if (root == nullptr) {
            return root;
        }

        if (root->left == nullptr && root->right == nullptr) {
            if (root->val >= low && root->val <= high) {
                return root;
            }

            return nullptr;
        }

        if (root->left == nullptr) {
            if (root->val >= low && root->val <= high) {
                root->right = trim(root->right);
                return root;
            }

            return trim(root->right);
        }

        if (root->right == nullptr) {
            if (root->val >= low && root->val <= high) {
                root->left = trim(root->left);
                return root;
            }

            return trim(root->left);
        }

        TreeNode* left = trim(root->left);
        TreeNode* right = trim(root->right);

        if (left == nullptr) {
            if (root->val >= low && root->val <= high) {
                root->left = nullptr;
                root->right = right;
                return root;
            }

            return right;
        }

        if (right == nullptr) {
            if (root->val >= low && root->val <= high) {
                root->right = nullptr;
                root->left = left;
                return root;
            }

            return left;
        }

        root->left = left;
        root->right = right;

        return root;
    }

    TreeNode* trimBST(TreeNode* root, int _low, int _high) {
        low = _low;
        high = _high;
        return trim(root);
    }
};
