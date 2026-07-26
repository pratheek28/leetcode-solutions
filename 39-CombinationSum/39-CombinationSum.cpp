// Last updated: 7/25/2026, 7:29:22 PM
class Solution {
    void makeCombination(vector<int>& candidates, vector<vector<int>>& result, vector<int> comb, int idx, int total, int target) {
        if (total == target) {
            result.push_back(comb);
            return;
        }

        if (total > target || idx >= candidates.size()) return;

        comb.push_back(candidates[idx]);
        makeCombination(candidates, result, comb, idx, total + candidates[idx], target);
        comb.pop_back();
        makeCombination(candidates, result, comb, idx + 1, total, target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;

        vector<int> comb;

        makeCombination(candidates, result, comb, 0, 0, target);

        return result;


    }
};