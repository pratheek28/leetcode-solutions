// Last updated: 7/25/2026, 7:27:17 PM
class Solution {
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        return (root1 == root2)?true:
        (!root1 || !root2 || root1->val != root2->val)?false:
        (flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right)) ||
               (flipEquiv(root1->left, root2->right) && flipEquiv(root1->right, root2->left));
    }
};