// Last updated: 7/25/2026, 7:28:18 PM
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vals;
        if (root == nullptr) {
            return vals;
        }
        vector<int> left = postorderTraversal(root->left);
        for (int i = 0; i < left.size(); i++) {
            vals.push_back(left.at(i));
        }
        vector<int> right = postorderTraversal(root->right);
        for (int j = 0; j < right.size(); j++) {
            vals.push_back(right.at(j));
        }
        vals.push_back(root->val);
        return vals;
    }
};