// Last updated: 8/7/2026, 9:11:23 PM
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int lo = 0;
5        int hi = nums.size();
6
7        while (lo < hi) {
8            int mid = lo + (hi - lo) / 2;
9
10            if (mid == 0 && mid == nums.size()) return mid;
11
12            if ((mid - 1 < 0 || nums[mid - 1] < nums[mid]) && (mid + 1 >= nums.size() || nums[mid + 1] < nums[mid])) return mid;
13
14            if (mid + 1 < nums.size() && nums[mid] < nums[mid + 1]) {
15                lo = mid + 1;
16            }else {
17                hi = mid - 1;
18            }
19        }
20        return lo;
21    }
22};