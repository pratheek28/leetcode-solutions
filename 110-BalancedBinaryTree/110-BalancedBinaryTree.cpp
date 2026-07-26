// Last updated: 7/25/2026, 7:28:40 PM
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
    int height_of_tree(TreeNode* root) {
        if (root == nullptr) return 0;
        return (1 + max(height_of_tree(root->left), height_of_tree(root->right)));
    }
public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;
        if (root->left == nullptr && root->right == nullptr) return true;
        bool leftBalanced = isBalanced(root->left);
        bool rightBalanced = isBalanced(root->right);
        int left = height_of_tree(root->left);
        int right = height_of_tree(root->right);
        if (abs(left - right) <= 1 && leftBalanced && rightBalanced) return true;
        return false;
    }
};