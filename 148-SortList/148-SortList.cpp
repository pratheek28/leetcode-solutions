// Last updated: 8/15/2026, 9:39:34 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12    struct CompareListNode {
13        bool operator()(ListNode* l1, ListNode*& l2) {
14            return l1->val > l2->val;
15        }
16    };
17public:
18    ListNode* sortList(ListNode* head) {
19        if (!head) return nullptr;
20        priority_queue<ListNode*, vector<ListNode*>, CompareListNode> minHeap;
21
22        ListNode* loop = head;
23
24        while (loop) {
25            minHeap.push(loop);
26            loop = loop->next;
27        }
28
29        head = nullptr;
30        ListNode* tail = nullptr;
31
32        while (!minHeap.empty()) {
33            ListNode* node = minHeap.top();
34            minHeap.pop();
35
36            if (!head) {
37                head = node;
38                tail = node;
39            }else {
40                tail->next = node;
41                tail = node;
42            }
43
44            tail->next = nullptr;
45        }
46
47        return head;
48    }
49};