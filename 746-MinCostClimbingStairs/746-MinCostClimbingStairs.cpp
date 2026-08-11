// Last updated: 8/10/2026, 10:05:02 PM
1class Solution {
2public:
3    int minCostClimbingStairs(vector<int>& cost) {
4        vector<int> dp(cost.size(), INT_MAX);
5
6        dp[0] = cost[0];
7        dp[1] = cost[1];
8
9        for (int i = 2; i < cost.size(); i++) {
10            dp[i] = min(dp[i - 1] + cost[i], dp[i - 2] + cost[i]);
11        }
12
13        return min(dp[cost.size() - 1], dp[cost.size() - 2]);
14    }
15};