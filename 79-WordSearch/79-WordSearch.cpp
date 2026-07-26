// Last updated: 7/25/2026, 7:28:55 PM
class Solution {
    bool dfs(vector<vector<char>>& board, string& word, vector<bool>& visited, int i, int j, int idx, char direc) {
        if (idx == word.size()) return true;

        if (i < 0 || j < 0 || i >= board.size() || j >= board[i].size()) return false;

        int vIdx = (i * board[i].size()) + j;
        if (board[i][j] != word[idx] || visited[vIdx]) return false;

        visited[vIdx] = true;

        bool left = false;
        bool right = false;
        bool top = false;
        bool bottom = false;

        if (direc != 'l') {
            left = dfs(board, word, visited, i, j - 1, idx + 1, 'r');
        }

        if (direc != 'r') {
            right = dfs(board, word, visited, i, j + 1, idx + 1, 'l');
        }

        if (direc != 'b') {
            bottom = dfs(board, word, visited, i + 1, j, idx + 1, 't');
        }

        if (direc != 't') {
            top = dfs(board, word, visited, i - 1, j, idx + 1, 'b');
        }

        if (!top && !left && !bottom && !right) visited[vIdx] = false;
        
        return (top || left || bottom || right);
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int idx = 0;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (idx >= word.size()) return false;

                if (board[i][j] == word[idx]) {
                    vector<bool> visited(board.size() * board[i].size(), false);
                    if (dfs(board, word, visited, i, j, idx, 'n')) return true;
                }
            }
        }
        return false;
    }
};