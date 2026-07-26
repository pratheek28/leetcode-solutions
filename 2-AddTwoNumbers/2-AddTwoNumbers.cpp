// Last updated: 7/25/2026, 7:29:49 PM
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        ListNode* loop1 = l1;
        ListNode* loop2 = l2;

        int carryover = 0;
        int sum = 0;

        ListNode* result = new ListNode(-1);
        ListNode* temp = result;

        while (loop1 or loop2) {
            sum = carryover;
            if (loop1) {
                sum += loop1->val;
            }
            if (loop2) {
                sum += loop2->val;
            }

            if (sum >= 10) {
                carryover = 1;
                sum = sum - 10;
            }else {
                carryover = 0;
            }
            temp->next = new ListNode(sum);
            temp = temp->next;
            if (loop1) {
                loop1 = loop1->next;
            }
            if (loop2) {
                loop2 = loop2->next;
            }
        }
        if (carryover == 1) {
            temp->next = new ListNode(carryover);
        }
        return result->next;
    }
};