// Last updated: 7/25/2026, 7:29:16 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;

        for (int i = 0; i < strs.size(); i++) {
            string key = strs[i];
            sort(key.begin(), key.end());
            ans[key].push_back(strs[i]);
        }

        vector<vector<string>> result;

        for (auto& entry : ans) {
            result.push_back(entry.second);
        }

        return result;
    }
};