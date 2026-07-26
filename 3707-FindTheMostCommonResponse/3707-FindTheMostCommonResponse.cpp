// Last updated: 7/25/2026, 7:26:41 PM
class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string, int> map;

        for (auto& a : responses) {
            unordered_set<string> set(a.begin(), a.end());
            for (auto& s : set) {
                map[s]++;
            }
        }

        string ans = "";
        int maximum = 0;

        for (auto& key : map) {
            if (key.second > maximum || (key.second == maximum && key.first < ans)) {
                maximum = key.second;
                ans = key.first;
            }
        }
        return ans;
    }
};