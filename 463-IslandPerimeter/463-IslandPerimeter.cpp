// Last updated: 7/25/2026, 7:27:32 PM
class Solution {
    int numAdj(vector<vector<int>>& grid, int row, int col) {
        int numOfAdj = 0;
        //check in the same row
        if (row - 1 >= 0) {
            if (grid[col][row - 1] == 1) numOfAdj++;
        }if (row + 1 < grid[col].size()) {
            if (grid[col][row + 1] == 1) numOfAdj++;
        }

        //check in the same col
        if (col - 1 >= 0) {
            if (grid[col - 1][row] == 1) numOfAdj++;
        }if (col + 1 < grid.size()) {
            if (grid[col + 1][row] == 1) numOfAdj++;
        }

        return numOfAdj;
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) {
                    perimeter += (4 - numAdj(grid, j, i));
                }
            }
        }
        return perimeter;
    }
};