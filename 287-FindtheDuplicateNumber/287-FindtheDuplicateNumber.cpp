// Last updated: 7/28/2026, 10:41:21 AM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        int slow = nums[0];
5        int fast = nums[0];
6
7        while (true) {
8            slow = nums[slow];
9            fast = nums[nums[fast]];
10
11            if (slow == fast) break;
12        }
13
14        int slow2 = nums[0];
15
16        while (slow != slow2) {
17            slow = nums[slow];
18            slow2 = nums[slow2];
19        }
20
21        return slow;
22    }
23};