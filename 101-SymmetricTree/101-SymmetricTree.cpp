// Last updated: 7/25/2026, 7:28:45 PM
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
    bool isMirror(TreeNode* p, TreeNode* q) {
        if (!p and !q) return true;
        if (!p || !q) return false;

        return (p->val == q->val) and isMirror(p->left, q->right) and isMirror(p->right, q->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return (isMirror(root->left, root->right));
    }
};