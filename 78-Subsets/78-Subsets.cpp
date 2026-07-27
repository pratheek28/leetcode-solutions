// Last updated: 7/26/2026, 6:53:58 PM
1class Solution {
2    void subsets(vector<int>& nums, vector<vector<int>>& sol, vector<int>& curr, int i) {
3        if (i == nums.size()) {
4            sol.push_back(curr);
5            return;
6        }
7
8        curr.push_back(nums[i]);
9        subsets(nums, sol, curr, i + 1);
10        curr.pop_back();
11
12        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
13            i++;
14        }
15        subsets(nums, sol, curr, i + 1);
16    }
17public:
18    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
19        vector<vector<int>> sol;
20        vector<int> curr;
21        sort(nums.begin(), nums.end());
22        subsets(nums, sol, curr, 0);
23        return sol;
24    }
25};