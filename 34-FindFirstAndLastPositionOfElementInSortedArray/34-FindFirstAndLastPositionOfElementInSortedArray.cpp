// Last updated: 7/25/2026, 7:29:26 PM
class Solution {
    int getIdx(vector<int>& nums, int lo, int hi, int target) {
        if (lo < 0 || hi >= nums.size() || lo > hi) return -1;

        int mid = (lo + hi) / 2;

        if (nums[mid] == target) return mid;

        if (nums[mid] < target) {
            return getIdx(nums, mid + 1, hi, target);
        }else {
            return getIdx(nums, lo, hi - 1, target);
        }
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0) return {-1, -1};
        int lo = 0;
        int hi = nums.size() - 1;

        int idx = getIdx(nums, lo, hi, target);

        if (idx == -1) return {-1, -1};

        lo = hi = idx;

        while (lo - 1 >= 0 && nums[lo - 1] == target) {
            lo--;
        }
        while (hi + 1 < nums.size() && nums[hi + 1] == target) {
            hi++;
        }

        return {lo, hi};


        
    }
};