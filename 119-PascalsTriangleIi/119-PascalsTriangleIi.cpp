// Last updated: 7/25/2026, 7:28:32 PM
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0) return {1};
        
        vector<int> sol = {1, 1};
        if (rowIndex == 1) return sol;

        for (int i = 2; i <= rowIndex; i++) {
            vector<int> newRow(i + 1, 1);
            for (int j = 1; j < i; j++) {
                newRow[j] = sol[j] + sol[j - 1];
            }
            sol = newRow;
        }

        return sol;
    }
};