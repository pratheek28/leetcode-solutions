// Last updated: 7/25/2026, 7:27:54 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    bool checkD(TreeNode* root, TreeNode* node) {
        if (!root) return false;

        if (root->val == node->val) return true;

        bool l = checkD(root->left, node);
        bool r = checkD(root->right, node);

        if (!l and !r) return false;
        return true;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root) return nullptr;
        if (!root->left and !root->right) return nullptr;

        if (root->val == p->val) {
            if (checkD(root, q)) return root;
        }if (root->val == q->val) {
            if (checkD(root, p)) return root;
        }

        if (root->left and root->left->val == p->val) {
            if (root->right and root->right->val == q->val) return root;
        }if (root->left and root->left->val == q->val) {
            if (root->right and root->right->val == p->val) return root;
        }

        bool leftP = checkD(root->left, p);
        bool leftQ = checkD(root->left, q);

        if (leftP and leftQ) return (lowestCommonAncestor(root->left, p, q));

        bool rightP = checkD(root->right, p);
        bool rightQ = checkD(root->right, q);

        if (rightP and rightQ) return (lowestCommonAncestor(root->right, p, q));

        if (!leftP and !leftQ and !rightP and !rightQ) return nullptr;
        return root;
    }
};