// Last updated: 7/25/2026, 7:28:15 PM
class Solution {
    int helper(vector<int>& nums, int lo, int hi) {
        if (lo > hi) return INT_MAX;

        int mid = (lo + hi) / 2;
        int currMin = nums[mid];

        int left = helper(nums, lo, mid - 1);
        int right = helper(nums, mid + 1, hi);

        return min(min(left, right), currMin);
    }
public:
    int findMin(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size() - 1;

        return helper(nums, lo, hi);
    }
};