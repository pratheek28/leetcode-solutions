// Last updated: 7/25/2026, 7:29:06 PM
class Solution {
    int search(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& dp) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size()) {
            return 0;
        }

        if (i == 0 && j == 0 && grid[i][j] == 0) return 1;
        

        if (dp[i][j] != -1) return dp[i][j];

        if (grid[i][j] == 1) {
            return (dp[i][j] = 0);
        }

        int left = search(grid, i, j - 1, dp);
        int up = search(grid, i - 1, j, dp);

        return dp[i][j] = up + left;


    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), -1));
        return search(obstacleGrid, obstacleGrid.size() - 1, obstacleGrid[0].size() - 1, dp);
    }
};