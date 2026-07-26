// Last updated: 7/25/2026, 7:29:21 PM
class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), INT_MAX);

        dp[0] = 0;

        for (int i = 0; i < nums.size(); i++) {
            int val = nums[i];
            int j = i + 1;
            int idx = 0;
            while (idx < val && j < dp.size()) {
                dp[j] = min(dp[j], dp[i] + 1);
                j++;
                idx++;
            }
        }
        return dp[dp.size() - 1];

    }
};