// Last updated: 7/25/2026, 7:28:50 PM
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
        if (head) {
            ListNode *currNode = head;
            while (currNode) {
                ListNode *loopNode = currNode;
                while (loopNode->next) {
                    if (currNode->val == loopNode->next->val) {
                        ListNode *duplicateNode = loopNode->next;
                        loopNode->next = duplicateNode->next;
                        delete duplicateNode;
                    }
                    else {
                        loopNode = loopNode->next;
                    }
                }
                currNode = currNode->next;
            }
        }
        return head;
    }
};