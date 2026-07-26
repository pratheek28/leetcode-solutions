// Last updated: 7/25/2026, 7:29:13 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> solution;
        vector<vector<bool>> visited(matrix.size(), vector<bool>(matrix[0].size(), false));

        int i = 0;
        int j = 0;
        bool done = false;
        char direction = 'r';

        while (!done) {
            if (i >= matrix.size() || j >= matrix[0].size()) break;
            solution.push_back(matrix[i][j]);
            visited[i][j] = true;
            
            //Direction
            if (direction == 'r') {
                if (j + 1 == matrix[0].size() || visited[i][j + 1]) {
                    direction = 'd';
                    i++;
                    if (i < matrix.size() && j < matrix[i].size() && visited[i][j]) done = true;
                }else {
                    j++;
                }
            }else if (direction == 'd') {
                if (i + 1 == matrix.size() || visited[i + 1][j]) {
                    direction = 'l';
                    j--;
                    if (i < matrix.size() && j < matrix[i].size() && visited[i][j]) done = true;
                }else {
                    i++;
                }
            }else if (direction == 'l') {
                if (j - 1 == -1 || visited[i][j - 1]) {
                    direction = 't';
                    i--;
                    if (i < matrix.size() && j < matrix[i].size() && visited[i][j]) done = true;
                }else {
                    j--;
                }
            }else if (direction == 't') {
                if (i - 1 == -1 || visited[i - 1][j]) {
                    direction = 'r';
                    j++;
                    if (i < matrix.size() && j < matrix[i].size() && visited[i][j]) done = true;
                }else {
                    i--;
                }
            }
        }
        return solution;
    }
};