// Last updated: 7/29/2026, 7:34:49 PM
1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        vector<int> res;
5        deque<int> dq;
6
7        for (int i = 0; i < nums.size(); i++) {
8            if (!dq.empty() && dq.front() <= i - k) {
9                dq.pop_front();
10            }
11
12            while (!dq.empty() && nums[dq.back()] <= nums[i]) {
13                dq.pop_back();
14            }
15
16            dq.push_back(i);
17
18            if (i >= k - 1) {
19                res.push_back(nums[dq.front()]);
20            }
21        }
22        return res;
23    }
24};