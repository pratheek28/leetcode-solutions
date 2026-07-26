// Last updated: 7/25/2026, 7:29:00 PM
class Solution {
    void changeCol(vector<vector<int>>& matrix, vector<bool>& changed, int i, int j, int idx) {
        idx -= (i * matrix[0].size());
        for (int k = 0; k < matrix.size(); k++) {
            if (k != i) {
                if (matrix[k][j] != 0) {
                    matrix[k][j] = 0;
                    changed[idx] = true;
                }
            }
            idx += matrix[0].size();
        }
    }
    void changeRow(vector<vector<int>>& matrix, vector<bool>& changed, int i, int j, int idx) {
        idx -= j;
        for (int k = 0; k < matrix[i].size(); k++) {
            if (k != j) {
                if (matrix[i][k] != 0) {
                    matrix[i][k] = 0;
                    changed[idx] = true;
                }
            }
            idx++;
        }
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool> changed(matrix.size() * matrix[0].size(), false);
        // for (int i = 0; i < matrix.size(); i++) {
        //     for (int j = 0; j < matrix[i].size(); j++) {
        //         changed.push_back(false);
        //     }
        // }

        int idx = 0;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0 and !changed[idx]) {
                    changeRow(matrix, changed, i, j, idx);
                    changeCol(matrix, changed, i, j, idx);
                }
                idx++;
            }
        }
    }
};