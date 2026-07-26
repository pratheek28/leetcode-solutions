// Last updated: 7/25/2026, 7:29:12 PM
class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), 10e6);
        dp[0] = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            int val = nums[i];
            int j = i + 1;
            int idx = 0;
            while (idx < val && j < dp.size()) {
                dp[j] = min(dp[j], dp[i] + 1);
                j++;
                idx++;
            }
        }

        if (dp[dp.size() - 1] >= 10e6) return false;
        return true;
    }
};