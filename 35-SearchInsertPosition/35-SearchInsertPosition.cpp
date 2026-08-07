// Last updated: 8/6/2026, 11:15:25 PM
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int left = 0;
5        int right = nums.size() - 1;
6
7        while (left <= right) {
8            int mid = left + (right - left) / 2;
9
10            if (nums[mid] == target) return mid;
11            else if(nums[mid] > target) right = mid - 1;
12            else left = mid + 1;
13        }
14
15        return left;
16    }
17};