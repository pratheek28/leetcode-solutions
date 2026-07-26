// Last updated: 7/25/2026, 7:27:11 PM
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        vector<vector<int>> res;

        int min = INT_MAX;

        for (int i = 0; i + 1 < arr.size(); i++) {
            if (arr[i + 1] - arr[i] == min) {
                res.push_back({arr[i], arr[i + 1]});
            }else if (arr[i + 1] - arr[i] < min) {
                res.clear();
                res.push_back({arr[i], arr[i + 1]});
                min = arr[i + 1] - arr[i];
            }
        }

        return res;
    }
};