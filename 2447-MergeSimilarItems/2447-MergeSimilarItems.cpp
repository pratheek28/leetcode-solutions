// Last updated: 7/25/2026, 7:26:54 PM
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int, int> hashMap;
        vector<vector<int>> res;

        for (int i = 0; i < items1.size(); i++) {
            hashMap[items1[i][0]] = items1[i][1];
        }

        for (int i = 0; i < items2.size(); i++) {
            if (hashMap.find(items2[i][0]) != hashMap.end()) {
                hashMap[items2[i][0]] += items2[i][1];
            }else {
                hashMap[items2[i][0]] = items2[i][1];
            }
        }

        for (const auto& pair : hashMap) {
            res.push_back({pair.first, pair.second});
        }
        sort(res.begin(), res.end());
        
        return res;
    }
};