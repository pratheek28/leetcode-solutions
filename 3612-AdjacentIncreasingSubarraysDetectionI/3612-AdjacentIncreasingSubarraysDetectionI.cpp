// Last updated: 7/25/2026, 7:26:43 PM
class Solution {
    bool isIncreasing(vector<int>& nums, int k, int i){
        for (int j = i; j < i + (k - 1); j++) {
            if (nums[j] >= nums[j + 1]) return false;
        }
        return true;
    }
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        if (nums.size() < 2*k) return false;

        for (int i = 0; i <= nums.size() - (2*k); i++) {
            if (isIncreasing(nums, k, i) and isIncreasing(nums, k, i + k)) return true;
        }

        return false;
    }
};