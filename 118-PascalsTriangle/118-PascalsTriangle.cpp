// Last updated: 7/25/2026, 7:28:34 PM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 1) return {{1}};

        vector<vector<int>> sol = {{1}, {1, 1}};

        for (int i = 3; i <= numRows; i++) {
            vector<int> newRow(i, 1);
            vector<int> prev = sol[i - 2];
            for (int j = 1; j < i - 1; j++) {
                newRow[j] = prev[j] + prev[j - 1];
            }
            sol.push_back(newRow);
        }

        return sol;
    }
};