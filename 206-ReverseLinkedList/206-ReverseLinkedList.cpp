// Last updated: 7/25/2026, 7:28:04 PM
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
    ListNode* reverseList(ListNode* head) {
        if (!head) return nullptr;
        stack<ListNode*> st;

        ListNode* loop = head;
        while (loop) {
            st.push(loop);
            loop = loop->next;
        }

        head = st.top();
        st.pop();
        head->next = nullptr;
        ListNode* prev = head;
        while (!st.empty()) {
            ListNode* node = st.top();
            st.pop();
            prev->next = node;
            prev = node;
            node->next = nullptr;
        }

        return head;
    }
};