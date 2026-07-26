// Last updated: 7/25/2026, 7:29:33 PM
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
    struct compareLLVals {
        bool operator()(ListNode* n1, ListNode* n2) {
            return n1->val > n2->val;
        }
    };
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compareLLVals>minHeap;

        for (int i = 0; i < lists.size(); i++) {
            if (lists[i]) {
                minHeap.push(lists[i]);
            }   
        }

        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        while (!minHeap.empty()) {
            ListNode* min = minHeap.top();
            if (!head) {
                head = min;
                tail = min;
            }else {
                tail->next = min;
                tail = min;
            }
            minHeap.pop();

            if (min->next) {
                minHeap.push(min->next);
            }
        }

        return head;
    }
};