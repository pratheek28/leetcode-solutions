// Last updated: 7/25/2026, 7:28:19 PM
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if (!root) return result;
        result.push_back(root->val);
        vector<int> leftRes = preorderTraversal(root->left);
        for (int i = 0; i < leftRes.size(); i++) {
            result.push_back(leftRes.at(i));
        }
        vector<int> rightRes = preorderTraversal(root->right);
        for (int i = 0; i < rightRes.size(); i++) {
            result.push_back(rightRes.at(i));
        }
        return result;
    }
};