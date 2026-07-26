// Last updated: 7/25/2026, 7:29:46 PM
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) return s;

        vector<vector<char>> mat(numRows);

        int i = 0;
        int traverse = 1;
        for (char c : s) {
            mat[i].push_back(c);
            if (i == 0) {
                traverse = 1;
            }else if (i == numRows - 1) {
                traverse = -1;
            }
            i += traverse;
        }

        string res;

        for (const auto& row : mat) {
            for (char c : row) {
                res += c;
            }
        }

        return res;
    }
};