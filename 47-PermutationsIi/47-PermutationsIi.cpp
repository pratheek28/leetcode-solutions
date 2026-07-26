// Last updated: 7/25/2026, 7:29:19 PM
class Solution {
    void permuteUnique(vector<int>& nums, set<vector<int>>& mySet, vector<int>& curr, vector<bool>& positionUsed) {
        if (curr.size() == nums.size()) {
            mySet.insert(curr);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (positionUsed[i]) {
                continue;
            }

            curr.push_back(nums[i]);
            positionUsed[i] = true;

            permuteUnique(nums, mySet, curr, positionUsed);

            curr.pop_back();
            positionUsed[i] = false;
        }

        return;
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> mySet;
        vector<bool> positionUsed(nums.size(), false);
        vector<int> curr;

        permuteUnique(nums, mySet, curr, positionUsed);

        vector<vector<int>> sol(mySet.begin(), mySet.end());

        return sol;
    }
};