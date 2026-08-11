// Last updated: 8/10/2026, 9:59:39 PM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int lo = 0;
5        int hi = nums.size() - 1;
6
7        while (lo <= hi) {
8            int mid = lo + (hi - lo) / 2;
9
10            if (nums[mid] == target) return mid;
11
12            if (nums[mid] > target) {
13                hi = mid - 1;
14            }else {
15                lo = mid + 1;
16            }
17        }
18
19        return -1;
20    }
21};