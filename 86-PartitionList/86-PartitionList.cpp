// Last updated: 8/1/2026, 5:56:17 PM
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
12public:
13    ListNode* partition(ListNode* head, int x) {
14        queue<ListNode*> lesser;
15        queue<ListNode*> greater;
16
17        ListNode* loop = head;
18
19        while (loop) {
20            if (loop->val < x) {
21                lesser.push(loop);
22            }else {
23                greater.push(loop);
24            }
25
26            loop = loop->next;
27        }
28
29        head = nullptr;
30        ListNode* tail = nullptr;
31
32        while (!lesser.empty()) {
33            ListNode* node = lesser.front();
34            lesser.pop();
35
36            if (!head) {
37                head = node;
38                tail = node;
39                tail->next = nullptr;
40            }else {
41                tail->next = node;
42                tail = tail->next;
43                tail->next = nullptr;
44            }
45        }
46
47        while (!greater.empty()) {
48            ListNode* node = greater.front();
49            greater.pop();
50
51            if (!tail) {
52                head = node;
53                tail = node;
54                tail->next = nullptr;
55            }else {
56                tail->next = node;
57                tail = tail->next;
58                tail->next = nullptr;
59            }
60        }
61
62        return head;
63    }
64};