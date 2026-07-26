// Last updated: 7/25/2026, 7:27:26 PM
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
    bool checkLAndR(TreeNode* root, TreeNode* subRoot) {
        if (!root and !subRoot) return true;

        if (!root or !subRoot or root->val != subRoot->val) return false;

        if (!checkLAndR(root->left, subRoot->left)) return false;

        if (!checkLAndR(root->right, subRoot->right)) return false;

        return true;
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false;

        if (root->val == subRoot->val) {
            if (checkLAndR(root->left, subRoot->left) and checkLAndR(root->right, subRoot->right)) return true;
        }

        if (isSubtree(root->left, subRoot) or isSubtree(root->right, subRoot)) return true;

        return false;
    }
};