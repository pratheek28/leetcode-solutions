// Last updated: 7/25/2026, 7:27:06 PM
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
    int sol = 0;
    void helper(TreeNode* root, int maxVal) {
        if (!root) return;

        if (root->val >= maxVal) sol++;

        maxVal = max(maxVal, root->val);

        helper(root->left, maxVal);
        helper(root->right, maxVal);
    }
public:
    int goodNodes(TreeNode* root) {
        helper(root, INT_MIN);
        return sol;
    }
};