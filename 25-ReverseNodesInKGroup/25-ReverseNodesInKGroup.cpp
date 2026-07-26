// Last updated: 7/25/2026, 7:29:31 PM
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
    void reverse(ListNode*& loop, stack<ListNode*>& st, ListNode*& prev) {
        while (!st.empty()) {
            ListNode* node = st.top();
            st.pop();
            node->next = loop->next;
            loop->next = node;
            loop = loop->next;
        }
        prev = loop;
        loop = loop->next;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* loop = head;
        ListNode* prev = nullptr;
        int counter = 1;
        stack<ListNode*> st;

        while (loop) {
            if (counter == k) {
                if (!prev) {
                    head = loop;
                }else {
                    prev->next = loop;
                }
                reverse(loop, st, prev);
                counter = 1;
            }else {
                st.push(loop);
                counter++;
                // if (!prev) {
                //     head = loop->next;
                //     prev = loop;
                // }
                loop = loop->next;
                
            }
        }
        return head;
    }
};