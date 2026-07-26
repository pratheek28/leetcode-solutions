// Last updated: 7/25/2026, 7:28:58 PM
class Solution {
    bool helper(vector<vector<int>>& matrix, int target, int lo, int hi) {
        if (lo > hi) return false;
        int mid = (lo + hi) / 2;

        for (int i = 0; i < matrix[mid].size(); i++) {
            if (matrix[mid][i] == target) {
                return true;
            }else if (target < matrix[mid][i]) {
                return helper(matrix, target, lo, mid - 1);
            }
        }

        return helper(matrix, target, mid + 1, hi);
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lo = 0;
        int hi = matrix.size() - 1;

        return helper(matrix, target, lo, hi);
    }
};