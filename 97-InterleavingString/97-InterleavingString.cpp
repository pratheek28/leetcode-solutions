// Last updated: 8/15/2026, 9:21:30 PM
1class Solution {
2    bool isInterLeave(const string& s1, const string& s2, const string& s3, int i, int j, int k, vector<vector<int>>& dp) {
3        if (k >= s3.size() && (i > 0 || s1.size() == 0) && (j > 0 || s2.size() == 0)) return true;
4
5        if (i >= s1.size() && j >= s2.size()) return false;
6
7        if (dp[i][j] == 0) return false;
8        if (dp[i][j] == 1) return true;
9
10        bool first = false;
11        if (i < s1.size() && s1[i] == s3[k]) {
12            first = isInterLeave(s1, s2, s3, i + 1, j, k + 1, dp);
13            if (first) {
14                dp[i][j] = 1;
15                return true;
16            }
17        }
18
19        bool second = false;
20        if (j < s2.size() && s2[j] == s3[k]) {
21            second = isInterLeave(s1, s2, s3, i, j + 1, k + 1, dp);
22            if (second) {
23                dp[i][j] = 1;
24                return true;
25            }
26        }
27
28        dp[i][j] = 0;
29        return false;
30    }
31public:
32    bool isInterleave(string s1, string s2, string s3) {
33        int i = 0, j = 0, k = 0;
34        if (s3.size() == 0) return true;
35        if (s1.size() + s2.size() != s3.size()) return false;
36        vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, INT_MAX));
37        return isInterLeave(s1, s2, s3, i, j, k, dp);
38    }
39};