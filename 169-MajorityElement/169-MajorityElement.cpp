// Last updated: 7/25/2026, 7:28:11 PM
class Solution {
    int findNum(vector<int>& nums, int i) {
        int count = 1;
        while (i + 1 < nums.size() and nums[i] == nums[i + 1]) {
            count++;
            i++;
        }
        return count;
    }
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();

        for (int i = 0; i + 1 < nums.size(); i++) {
            if (nums[i] == nums[i + 1]) {
                int count = findNum(nums, i);
                if (count > size / 2) return nums[i];
                i += count - 1;
            }
        }

        return nums[0];
    }
};