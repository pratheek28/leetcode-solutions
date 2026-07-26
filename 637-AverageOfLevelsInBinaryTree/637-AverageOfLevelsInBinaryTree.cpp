// Last updated: 7/25/2026, 7:27:24 PM
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        if(!root) return result;

        queue<TreeNode*> q;
        q.push(root);


        while (!q.empty()) {
            int level = q.size();
            double sum = 0;

            for (int i = 0; i < level; i++) {
                TreeNode* node = q.front();
                sum += node->val;
                q.pop();

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            result.push_back(sum / level);
        }

        return result;
    }
};