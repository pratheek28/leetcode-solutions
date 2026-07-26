// Last updated: 7/25/2026, 7:28:53 PM
class Solution {
    bool helper(vector<int>& nums, int target, int lo, int hi) {
        if (lo > hi) return false;

        int mid = (lo + hi) / 2;

        if (nums[mid] == target) return true;

        return (helper(nums, target, lo, mid - 1) || helper(nums, target, mid + 1, hi));
    }
public:
    bool search(vector<int>& nums, int target) {
        return helper(nums, target, 0, nums.size() - 1);
    }
};