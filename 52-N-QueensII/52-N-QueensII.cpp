// Last updated: 7/30/2026, 8:38:05 PM
1class Solution {
2    bool isSafe(int n, int row, int col, const vector<string>& curr) {
3        for (int i = 0; i < row; i++) {
4            if (curr[i][col] == 'Q') return false;
5        }
6
7        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
8            if (curr[i][j] == 'Q') return false;
9        }
10
11        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
12            if (curr[i][j] == 'Q') return false;
13        }
14
15        return true;
16    }
17
18    void solveNQueens(vector<vector<string>>& sol, int n, int row, vector<string>& curr) {
19        if (n == row) {
20            sol.push_back(curr);
21            return;
22        }
23
24        for (int i = 0; i < n; i++) {
25            if (isSafe(n, row, i, curr)) {
26                curr[row][i] = 'Q';
27                solveNQueens(sol, n, row + 1, curr);
28                curr[row][i] = '.';
29            }
30        }
31    }
32public:
33    int totalNQueens(int n) {
34        vector<vector<string>> sol;
35        vector<string> curr(n, string(n, '.'));
36        solveNQueens(sol, n, 0, curr);
37        return sol.size();
38    }
39};