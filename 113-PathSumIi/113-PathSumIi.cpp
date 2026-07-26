// Last updated: 7/25/2026, 7:28:37 PM
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
    void pathSumHelper(TreeNode* root, int targetSum, int currSum, vector<int> currVals, vector<vector<int>>& res) {
        if (!root) return;

        currSum += root->val;
        currVals.push_back(root->val);
        
        if (currSum == targetSum && !root->left && !root->right) {
            res.push_back(currVals);
        }else {
            pathSumHelper(root->left, targetSum, currSum, currVals, res);
            pathSumHelper(root->right, targetSum, currSum, currVals, res);
        }


        

        currVals.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res;

        pathSumHelper(root, targetSum, 0, {}, res);

        return res;
    }
};