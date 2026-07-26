// Last updated: 7/25/2026, 7:29:25 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.at(nums.size() - 1) < target) {
            return nums.size();
        }
        for (unsigned int i = 0; i + 1< nums.size(); i++) {
            if (nums.at(i) < target && nums.at(i + 1) > target) {
                return i + 1;
            }
            else if (nums.at(i) == target) {
                return i;
            }
            else if (nums.at(i + 1) == target) {
                return i + 1;
            }
        }
        return 0;
    }
};