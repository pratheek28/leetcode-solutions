// Last updated: 7/25/2026, 7:28:21 PM
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
    ListNode *detectCycle(ListNode *head) {
        if (!head) return nullptr;

        unordered_map<ListNode*, bool> mp;

        ListNode* loop = head;

        while (loop) {
            if (mp[loop] == true) {
                return loop;
            }
            mp[loop] = true;
            loop = loop->next;
        }
        return nullptr;
    }
};