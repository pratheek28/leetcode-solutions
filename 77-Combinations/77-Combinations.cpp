// Last updated: 8/2/2026, 8:20:27 AM
1class Solution {
2    void combine(int n, int k, vector<vector<int>>& sol, vector<int>& curr, int start) {
3        if (curr.size() == k) {
4            sol.push_back(curr);
5            return;
6        }
7
8        for (int i = start; i < n; i++) {
9            curr.push_back(i + 1);
10            combine(n, k, sol, curr, i + 1);
11            curr.pop_back();
12        }
13    }
14public:
15    vector<vector<int>> combine(int n, int k) {
16        vector<vector<int>> sol;
17        vector<int> curr;
18        combine(n, k, sol, curr, 0);
19        return sol;
20    }
21};