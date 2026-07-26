// Last updated: 7/25/2026, 7:27:55 PM
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
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        queue<TreeNode*> q;
        q.push(root);
        minHeap.push(root->val);

        int sol = -1;
        while (!q.empty()) {
            int levelSize = q.size();
            for (int i = 0; i < q.size(); i++) {
                TreeNode* node = q.front();

                if (node->left) {
                    q.push(node->left);
                    minHeap.push(node->left->val);
                }

                if (node->right) {
                    q.push(node->right);
                    minHeap.push(node->right->val);
                }
                q.pop();
            }
        }

        int idx = 1;
        while (!minHeap.empty()) {
            if (idx == k) {
                sol = minHeap.top();
                break;
            }
            minHeap.pop();
            idx++;
        }

        return sol;
    }
};