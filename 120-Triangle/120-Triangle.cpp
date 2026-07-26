// Last updated: 7/25/2026, 7:28:31 PM
class Solution {
    int search(vector<vector<int>>& triangle, vector<vector<int>>& dp, int i, int j) {
        if (i >= triangle.size() || j >= triangle[i].size()) return 0;

        if (dp[i][j] != INT_MAX) return dp[i][j];

        int bottom = search(triangle, dp, i + 1, j);
        int botRight = search(triangle, dp, i + 1, j + 1);

        return (dp[i][j] = triangle[i][j] + min(bottom, botRight));
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>>dp;

        for (int i = 1; i <= triangle.size(); i++) {
            vector<int> vec(i, INT_MAX);
            dp.push_back(vec);
        }

        return search(triangle, dp, 0, 0);
    }
};