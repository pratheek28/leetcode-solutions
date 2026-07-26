// Last updated: 7/25/2026, 7:28:26 PM
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
    int sumNumbers(TreeNode* root, string nums) {
        if (!root) return 0;

        nums += to_string(root->val);

        int left = sumNumbers(root->left, nums);
        int right = sumNumbers(root->right, nums);
        if (left == 0 && right == 0) return stoi(nums);
        return left + right;
    }
public:
    int sumNumbers(TreeNode* root) {
        return sumNumbers(root, "");
    }
};