// Last updated: 7/25/2026, 7:29:27 PM
class Solution {
    int search(vector<int>& nums, int target, int lo, int hi) {
        if (lo > hi) return -1;
        
        int mid = (lo + hi) / 2;

        if (nums[mid] == target) return mid;

        int rightPartition = search(nums, target, mid + 1, hi);
        int leftPartition = search(nums, target, lo, mid - 1);

        if (rightPartition != -1) return rightPartition;

        if (leftPartition != -1) return leftPartition;

        return -1;

    }
public:
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() - 1;
        int mid = (lo + hi ) / 2;

       if (nums[mid] == target) return mid;

       int rightPartition = search(nums, target, mid + 1, hi);
       int leftPartition = search(nums, target, lo, mid - 1);

       if (rightPartition != -1) return rightPartition;

       if (leftPartition != -1) return leftPartition;

        return -1;
        
    }
};