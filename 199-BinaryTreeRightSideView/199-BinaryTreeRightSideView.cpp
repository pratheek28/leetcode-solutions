// Last updated: 7/25/2026, 7:28:06 PM
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;

        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        int level = 0;
        
        while (!q.empty()) {
            int levelSize = q.size();
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (level == result.size()) {
                    result.push_back(node->val);
                }

                if (node->right) q.push(node->right);
                if (node->left) q.push(node->left);
            }
            level++;
        }
        return result;
    }
};