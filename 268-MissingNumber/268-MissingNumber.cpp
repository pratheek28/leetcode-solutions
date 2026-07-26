// Last updated: 7/25/2026, 7:27:48 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() > 0 and nums.at(0) != 0) return 0;
        for (int i = 0; i + 1 < nums.size(); i++) {
            if (nums.at(i + 1) - nums.at(i) != 1) return (1 + nums.at(i));
        }
        return (nums.at(nums.size() - 1) + 1);
    }
};