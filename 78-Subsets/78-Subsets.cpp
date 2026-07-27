// Last updated: 7/26/2026, 6:43:21 PM
1class Solution {
2    void subsets(vector<int>& nums, vector<vector<int>>& sol, vector<int>& curr, int start) {
3        sol.push_back(curr);
4
5        for (int i = start; i < nums.size(); i++) {
6            curr.push_back(nums[i]);
7            subsets(nums, sol, curr, i + 1);
8            curr.pop_back();
9        }
10    }
11public:
12    vector<vector<int>> subsets(vector<int>& nums) {
13        vector<vector<int>>sol;
14        // sort(nums.begin(), nums.end());
15        vector<int> curr;
16        subsets(nums, sol, curr, 0);
17        return sol;
18    }
19};