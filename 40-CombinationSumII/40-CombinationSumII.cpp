// Last updated: 7/27/2026, 5:44:39 PM
1class Solution {
2    void combination(vector<int>& candidates, vector<vector<int>>& sol, int target, vector<int>& curr, int start) {
3        if (target == 0) {
4            sol.push_back(curr);
5            return;
6        }
7
8        for (int i = start; i < candidates.size(); i++) {
9            if (i > start && candidates[i] == candidates[i - 1]) continue;
10            if (candidates[i] > target) break;
11
12            curr.push_back(candidates[i]);
13            combination(candidates, sol, target - candidates[i], curr, i + 1);
14            curr.pop_back();
15        }
16    }
17public:
18    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
19        sort(candidates.begin(), candidates.end());
20        vector<vector<int>> sol;
21        vector<int> curr;
22        combination(candidates, sol, target, curr, 0);
23        return sol;
24    }
25};