// Last updated: 8/16/2026, 5:37:05 PM
1class Solution {
2public:
3    int lengthOfLIS(vector<int>& nums) {
4        vector<int> dp(nums.size(), 1);
5        dp[0] = 1;
6        int maximum = 1;
7
8        for (int i = 1; i < nums.size(); i++) {
9            for (int j = 0; j < i; j++) {
10                if (nums[j] < nums[i]) {
11                    dp[i] = max(dp[i], dp[j] + 1);
12                    maximum = max(maximum, dp[i]);
13                }
14            }
15        }
16
17        return maximum;
18    }
19};