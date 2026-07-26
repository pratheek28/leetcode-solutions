// Last updated: 7/25/2026, 7:28:43 PM
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};

        vector<vector<int>> sol;
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;

        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> temp(levelSize);
            if (level % 2 == 0) {
                for (int j = 0; j < levelSize; j++) {
                    TreeNode* node = q.front();
                    temp[j] = node->val;
                    if (node->left) q.push(node->left);
                    if (node->right) q.push(node->right);
                    q.pop();
                }
            }else {
                for (int j = levelSize - 1; j >= 0; j--) {
                    TreeNode* node = q.front();
                    temp[j] = node->val;
                    if (node->left) q.push(node->left);
                    if (node->right) q.push(node->right);
                    q.pop();
                }
            }
            sol.push_back(temp);
            level++;
        }
        return sol;
    }
};