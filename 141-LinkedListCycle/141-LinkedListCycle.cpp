// Last updated: 7/25/2026, 7:28:22 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head) return false;

        unordered_map<ListNode*, bool> mp;

        ListNode* loop = head;

        while (loop) {
            if (mp[loop] == true) return true;

            mp[loop] = true;
            loop = loop->next;
        }
        return false;
    }
};