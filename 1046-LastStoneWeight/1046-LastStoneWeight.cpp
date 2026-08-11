// Last updated: 8/10/2026, 10:11:01 PM
1class Solution {
2public:
3    int lastStoneWeight(vector<int>& stones) {
4        priority_queue<int> maxHeap;
5
6        for (auto& stone : stones) {
7            maxHeap.push(stone);
8        }
9
10        while (maxHeap.size() != 1 && !maxHeap.empty()) {
11            int y = maxHeap.top();
12            maxHeap.pop();
13
14            int x = maxHeap.top();
15            maxHeap.pop();
16
17            if (y == x) continue;
18
19            maxHeap.push(y - x);
20        }
21        
22        if (maxHeap.empty()) return 0;
23        return maxHeap.top();
24    }
25};