// Last updated: 8/2/2026, 8:11:09 AM
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* left;
7    Node* right;
8    Node* next;
9
10    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
11
12    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
13
14    Node(int _val, Node* _left, Node* _right, Node* _next)
15        : val(_val), left(_left), right(_right), next(_next) {}
16};
17*/
18
19class Solution {
20public:
21    Node* connect(Node* root) {
22        if (!root) return nullptr;
23
24        queue<Node*> q;
25        q.push(root);
26
27
28        while (!q.empty()) {
29            int levelSize = q.size();
30            
31            for (int i = 0; i < levelSize; i++) {
32                Node* curr = q.front();
33                q.pop();
34
35                if (q.empty() || i + 1 == levelSize) {
36                    curr->next = nullptr;
37                }else {
38                    curr->next = q.front();
39                }
40
41                if (curr->left) q.push(curr->left);
42
43                if (curr->right) q.push(curr->right);
44            }
45        }
46
47        return root;
48    }
49};