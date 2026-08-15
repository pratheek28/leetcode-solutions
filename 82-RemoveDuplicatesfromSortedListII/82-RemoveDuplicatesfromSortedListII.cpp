// Last updated: 8/14/2026, 11:33:33 PM
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
13    ListNode* deleteDuplicates(ListNode* head) {
14        if (!head) return nullptr;
15
16        ListNode* loop = head;
17        ListNode* prev = nullptr;
18        while (loop && loop->next) {
19            if (loop->val == loop->next->val) {
20                ListNode* duplicateLoop = loop->next;
21                while (duplicateLoop && loop->val == duplicateLoop->val) {
22                    duplicateLoop = duplicateLoop->next;
23                }
24                if (prev == nullptr) {
25                    head = duplicateLoop;
26                }else {
27                    prev->next = duplicateLoop;
28                }
29
30                ListNode* victim = loop->next;
31                while (victim != duplicateLoop) {
32                    loop->next = victim->next;
33                    delete victim;
34                    victim = loop->next;
35                }
36                delete loop;
37                if (prev == nullptr) {
38                    loop = head;
39                }else {
40                    loop = prev;
41                    loop = loop->next;
42                }
43            }
44            else {
45                prev = loop;
46                loop = loop->next;
47            }
48        }
49        return head;
50    }
51};