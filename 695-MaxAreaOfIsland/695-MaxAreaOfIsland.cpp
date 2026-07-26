// Last updated: 7/25/2026, 7:27:21 PM
class Solution {
    int helper(vector<vector<int>>& grid, int i, int j) {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[i].size() || grid[i][j] == 0) return 0;

        grid[i][j] = 0;
        int sol = 1;

        int top = helper(grid, i - 1, j);
        int bottom = helper(grid, i + 1, j);
        int left = helper(grid, i, j - 1);
        int right = helper(grid, i, j + 1);

        return (sol + top + bottom + left + right);
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) {
                    maxArea = max(maxArea, helper(grid, i, j));
                }
            }
        }
        return maxArea;
    }
};