// Last updated: 7/25/2026, 7:28:13 PM
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxDiff = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i + 1 < nums.size(); i++) {
            if ((nums[i + 1] - nums[i]) > maxDiff) {
                maxDiff = (nums[i + 1] - nums[i]);
            }
        }

        return maxDiff;
    }
};