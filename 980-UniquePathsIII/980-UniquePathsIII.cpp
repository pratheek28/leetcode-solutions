// Last updated: 8/17/2026, 7:30:14 PM
1class Solution {
2    int res = 0, empty = 1, startX, startY;
3public:
4    int uniquePathsIII(vector<vector<int>>& grid) {
5        int m = grid.size(), n = grid[0].size();
6
7        for (int i = 0; i < m; i++) {
8            for (int j = 0; j < n; j++) {
9                if (grid[i][j] == 0) empty++;
10                else if (grid[i][j] == 1) {
11                    startX = i;
12                    startY = j;
13                }
14            }
15        }
16
17        dfs(grid, startX, startY);
18        return res;
19    }
20
21    void dfs(vector<vector<int>>& grid, int x, int y) {
22        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] < 0) return;
23
24        if (grid[x][y] == 2) {
25            if (empty == 0) res++;
26            return;
27        }
28
29        grid[x][y] = -2;
30        empty--;
31        dfs(grid, x + 1, y);
32        dfs(grid, x - 1, y);
33        dfs(grid, x, y + 1);
34        dfs(grid, x, y - 1);
35        grid[x][y] = 0;
36        empty++;
37    }
38};