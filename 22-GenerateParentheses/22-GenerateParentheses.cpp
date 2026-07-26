// Last updated: 7/25/2026, 7:29:34 PM
class Solution {
    void dp(int open, int closed, int n, vector<string>& res, string p) {
        if (open == n && closed == n) {
            res.push_back(p);
            return;
        }

        if (open <= n) {
            dp(open + 1, closed, n, res, p + "(");
        }

        
        if (closed < open) {
            dp(open, closed + 1, n, res, p + ")");
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;

        dp(0, 0, n, result, "");
        
        return result;
    }
};