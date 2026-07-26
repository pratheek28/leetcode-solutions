// Last updated: 7/25/2026, 7:29:38 PM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* loop = head;
        int count = 1;
        while (loop->next) {
            loop = loop->next;
            count++;
        }

        ListNode* prev = nullptr;
        ListNode* vic = head;
        int loopCount = 1;
        while (loopCount <= (count - n)) {
            prev = vic;
            vic = vic->next;
            loopCount++;
        }

        if (prev == nullptr) {
            head = vic->next;
            delete vic;
            return head;
        }
        prev->next = vic->next;
        delete vic;
        return head;
    }
};