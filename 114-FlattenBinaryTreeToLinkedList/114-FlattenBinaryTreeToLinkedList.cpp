// Last updated: 7/25/2026, 7:28:36 PM
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
    void preOrderTraversal(TreeNode* node, queue<TreeNode*>& q) {
        if (!node) return;
        
        q.push(node);
        preOrderTraversal(node->left, q);
        preOrderTraversal(node->right, q);
    }
public:
    void flatten(TreeNode* root) {
        if (!root) return;

        queue<TreeNode*> q;
        preOrderTraversal(root, q);

        TreeNode* tail = q.front();
        q.pop();

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            tail->left = nullptr;
            tail->right = node;

            tail = node;
        }

        tail->left = nullptr;
        tail->right = nullptr;
    }
};