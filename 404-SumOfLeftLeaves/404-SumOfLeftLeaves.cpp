// Last updated: 7/25/2026, 7:27:34 PM
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
    bool isLeaf(TreeNode* node) {
        if (!node) return false;
        if (!node->left and !node->right) return true;
        return false;
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int leftVal = 0;

        if (!root) return leftVal;
        
        if (isLeaf(root->left)) {
            leftVal = root->left->val;
        }

        return leftVal + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};