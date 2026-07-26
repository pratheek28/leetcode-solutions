// Last updated: 7/25/2026, 7:26:49 PM
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
    int getGCD(int num1, int num2) {
        if (num1 % num2 == 0) {
            return num2;
        }

        int mod = num1 % num2;
        num1 = num2;
        num2 = mod;
        return getGCD(num1, num2);
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head->next) {
            return head;
        }

        ListNode* loop = head;
        ListNode* after = loop->next;
        while (loop->next) {
            ListNode* node = new ListNode(getGCD(max(loop->val, after->val), min(loop->val, after->val)));
            node->next = after;
            loop->next = node;
            loop = after;
            after = loop->next;
        }

        return head;
    }
};