// Last updated: 7/25/2026, 7:28:52 PM
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;

        ListNode* loop = head;
        ListNode* prev = nullptr;
        while (loop && loop->next) {
            if (loop->val == loop->next->val) {
                ListNode* duplicateLoop = loop->next;
                while (duplicateLoop && loop->val == duplicateLoop->val) {
                    duplicateLoop = duplicateLoop->next;
                }
                if (prev == nullptr) {
                    head = duplicateLoop;
                }else {
                    prev->next = duplicateLoop;
                }

                ListNode* victim = loop->next;
                while (victim != duplicateLoop) {
                    loop->next = victim->next;
                    delete victim;
                    victim = loop->next;
                }
                delete loop;
                if (prev == nullptr) {
                    loop = head;
                }else {
                    loop = prev;
                    loop = loop->next;
                }
            }
            else {
                prev = loop;
                loop = loop->next;
            }
        }
        return head;
    }
};