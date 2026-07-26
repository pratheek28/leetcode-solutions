// Last updated: 7/25/2026, 7:29:10 PM
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> sol;
        int size = intervals.size();
        int i = 0;
        while (i < size && intervals[i][1] < newInterval[0]) {
            sol.push_back(intervals[i]);
            i++;
        }
        while (i < size && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(intervals[i][0], newInterval[0]);
            newInterval[1] = max(intervals[i][1], newInterval[1]);
            i++;
        }
        sol.push_back(newInterval);
        while(i < size) {
            sol.push_back(intervals[i]);
            i++;
        }
        return sol;
    }
};