// Last updated: 7/25/2026, 7:28:48 PM
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
    void reverse(ListNode*& loop, stack<ListNode*>& st) {
        while (!st.empty()) {
            ListNode* node = st.top();
            st.pop();

            node->next = loop->next;
            loop->next = node;

            loop = loop->next;
        }
    }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) return head;

        ListNode* loop = head;
        ListNode* prev = nullptr;

        stack<ListNode*> st;

        int counter = 1;

        while (loop) {
            if (counter == right) {
                if (!prev) {
                    head = loop;
                }else {
                    prev->next = loop;
                }

                reverse(loop, st);
                break;
            }else if (counter >= left) {
                st.push(loop);
            }else {
                prev = loop;
            }
            loop = loop->next;
            counter++;
        }

        return head;
    }
};