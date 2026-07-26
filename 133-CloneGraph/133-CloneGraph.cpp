// Last updated: 7/25/2026, 7:28:25 PM
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    Node* helper(Node* node, unordered_map<int, Node*>& mp) {
        if (!node) return nullptr;

        if (mp.find(node->val) != mp.end()) return mp[node->val];

        Node* head = new Node(node->val);
        mp[head->val] = head;
        
        vector<Node*> __neighbors;
        for (int i = 0; i < node->neighbors.size(); i++) {
            Node* n = helper(node->neighbors[i], mp);
            if (n) __neighbors.push_back(n); 
        }

        head->neighbors = __neighbors;

        return head;
    }
public:
    Node* cloneGraph(Node* node) {
        unordered_map<int, Node*> mp;

        return helper(node, mp);
    }
};