// Last updated: 7/25/2026, 7:29:15 PM
class Solution {
    bool isSafe(int n, int row, int col, const vector<string>& curr) {
        for (int i = 0; i < row; i++) {
            if (curr[i][col] == 'Q') return false;
        }

        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (curr[i][j] == 'Q') return false;
        }

        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (curr[i][j] == 'Q') return false;
        }

        return true;
    }

    void solveNQueens(int n, int row, vector<vector<string>>& sol, vector<string>& curr) {
        if (n == row) {
            sol.push_back(curr);
            return;
        }

        for (int i = 0; i < n; i++) {
            if (isSafe(n, row, i, curr)) {
                curr[row][i] = 'Q';
                solveNQueens(n, row + 1, sol, curr);
                curr[row][i] = '.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> sol;
        vector<string> curr(n, string(n, '.'));
        solveNQueens(n, 0, sol, curr);
        return sol;
    }
};