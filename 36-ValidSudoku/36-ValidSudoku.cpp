// Last updated: 7/25/2026, 7:29:24 PM
class Solution {
    bool checkRow(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> mp;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    mp[board[i][j]]++;
                    if (mp[board[i][j]] > 1) return false;
                }
            }
        }
        return true;
    }

    bool checkCol(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> mp;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.') {
                    mp[board[j][i]]++;
                    if (mp[board[j][i]] > 1) return false;
                }
            }
        }
        return true;
    }

    bool check3x3(vector<vector<char>>& board) {
        unordered_map<char, int> mp;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] != '.') {
                    mp[board[i][j]]++;
                    if (mp[board[i][j]] > 1) return false;
                }
            }
        }
        mp.clear();

        for (int i = 0; i < 3; i++) {
            for (int j = 3; j < 6; j++) {
                if (board[i][j] != '.') {
                    mp[board[i][j]]++;
                    if (mp[board[i][j]] > 1) return false;
                }
            }
        }
        mp.clear();

        for (int i = 0; i < 3; i++) {
            for (int j = 6; j < 9; j++) {
                if (board[i][j] != '.') {
                    mp[board[i][j]]++;
                    if (mp[board[i][j]] > 1) return false;
                }
            }
        }
        mp.clear();

        for (int i = 3; i < 6; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] != '.') {
                    mp[board[i][j]]++;
                    if (mp[board[i][j]] > 1) return false;
                }
            }
        }
        mp.clear();

        for (int i = 3; i < 6; i++) {
            for (int j = 3; j < 6; j++) {
                if (board[i][j] != '.') {
                    mp[board[i][j]]++;
                    if (mp[board[i][j]] > 1) return false;
                }
            }
        }
        mp.clear();

        for (int i = 3; i < 6; i++) {
            for (int j = 6; j < 9; j++) {
                if (board[i][j] != '.') {
                    mp[board[i][j]]++;
                    if (mp[board[i][j]] > 1) return false;
                }
            }
        }
        mp.clear();

        for (int i = 6; i < 9; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] != '.') {
                    mp[board[i][j]]++;
                    if (mp[board[i][j]] > 1) return false;
                }
            }
        }
        mp.clear();

        for (int i = 6; i < 9; i++) {
            for (int j = 3; j < 6; j++) {
                if (board[i][j] != '.') {
                    mp[board[i][j]]++;
                    if (mp[board[i][j]] > 1) return false;
                }
            }
        }
        mp.clear();

        for (int i = 6; i < 9; i++) {
            for (int j = 6; j < 9; j++) {
                if (board[i][j] != '.') {
                    mp[board[i][j]]++;
                    if (mp[board[i][j]] > 1) return false;
                }
            }
        }
        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if (!checkRow(board)) return false;

        if (!checkCol(board)) return false;

        if (!check3x3(board)) return false;

        return true;
    }
};