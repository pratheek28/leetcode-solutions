// Last updated: 7/25/2026, 7:29:18 PM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix.size();
        int k = size - 1;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = i; j < k - i; j++) {
                int val = matrix[i][j];
                matrix[i][j] = matrix[k - j][i];
                matrix[k - j][i] = matrix[k - i][k - j];
                matrix[k - i][k - j] = matrix[j][k - i];
                matrix[j][k - i] = val;
            }
        }
    }
};