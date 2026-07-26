// Last updated: 7/25/2026, 7:28:47 PM
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vals;
        if (root == nullptr) {
            return vals;
        }

        vals = inorderTraversal(root->left);
        vals.push_back(root->val);
        vector<int> rSide = inorderTraversal(root->right);
        for (int i = 0; i < rSide.size(); i++) {
            vals.push_back(rSide.at(i));
        }
        return vals;
    }
    //NOTE: After looking at the solutions with good memory useage, I can see that they changed the function header. I did not know you could do that.
};