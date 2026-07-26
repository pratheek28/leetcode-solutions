// Last updated: 7/25/2026, 7:29:08 PM
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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return nullptr;
        if (k == 0) return head;

        stack<ListNode*> st;

        ListNode* loop = head;
        int size = 0;
        while (loop) {
            st.push(loop);
            loop = loop->next;
            size++;
        }
        k = (k % size);
        if (k == 0) return head;

        ListNode* node = st.top();
        ListNode* tail = node;
        tail->next = nullptr;
        head = tail;
        st.pop();
        for (int i = 1; i < k; i++) {
            if (st.empty()) break;

            ListNode* newNode = st.top();
            newNode->next = node;
            node = newNode;
            st.pop();
            if (i + 1 == k) head = newNode;
        }

        while (!st.empty()) {
            node = st.top();
            node->next = tail->next;
            tail->next = node;
            st.pop();
        }
        
        return head;
    }
};