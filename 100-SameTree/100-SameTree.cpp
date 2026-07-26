// Last updated: 7/25/2026, 7:28:46 PM
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q != nullptr) return false;
        if (p != nullptr && q == nullptr) return false;
        if (p == nullptr && q == nullptr) return true;
        bool leftValid = isSameTree(p->left, q->left);
        bool rightValid = isSameTree(p->right, q->right);
        if (p->val == q->val && leftValid && rightValid) return true;
        return false;
    }
};