// Last updated: 7/25/2026, 7:29:20 PM
class Solution {
    void permute(vector<int>& nums, vector<vector<int>>& sol, vector<int>& curr) {
        if (curr.size() == nums.size()) {
            sol.push_back(curr);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            auto it = find(curr.begin(), curr.end(), nums[i]);
            if (it != curr.end()) {
                continue;
            }

            curr.push_back(nums[i]);

            permute(nums, sol, curr);

            curr.pop_back();
        }

        return;
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> sol;
        vector<int> curr;

        permute(nums, sol, curr);

        return sol;
    }
};