// Last updated: 7/25/2026, 7:28:41 PM
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
    void swapVec(vector<vector<int>>& sol) {
        int lo = 0;
        int hi = sol.size() - 1;

        while (lo <= hi) {
            swap(sol[lo], sol[hi]);
            lo++;
            hi--;
        }
    }
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if (!root) return {};

        vector<vector<int>> sol;
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> temp(levelSize);
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);

                temp[i] = node->val;

                q.pop();
            }
            sol.push_back(temp);
        }

        swapVec(sol);
        
        return sol;
    }
};