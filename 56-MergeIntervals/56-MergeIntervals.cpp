// Last updated: 7/25/2026, 7:29:11 PM
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> sol;

        sort(intervals.begin(), intervals.end());

        for (int i = 0; i < intervals.size(); i++) {
            if (sol.empty() || intervals[i][0] > sol.back()[1]) {
                sol.push_back({intervals[i][0], intervals[i][1]});
            }else {
                sol.back()[1] = max(sol.back()[1], intervals[i][1]);
            }
        }

        return sol;
    }
};