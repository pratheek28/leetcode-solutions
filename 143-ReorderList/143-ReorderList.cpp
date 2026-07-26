// Last updated: 7/25/2026, 7:28:20 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast->next) {
            if (fast->next->next) {
                fast = fast->next->next;
            }else {
                fast = fast->next;
            }
            slow = slow->next;
        }

        ListNode* loop = slow->next;
        slow->next = nullptr;

        stack<ListNode*> st;

        while (loop) {
            st.push(loop);
            loop = loop->next;
        }

        loop = head;
        while (!st.empty()) {
            ListNode* node = st.top();
            node->next = loop->next;
            loop->next = node;
            loop = loop->next->next;
            st.pop();
        }
    }
};