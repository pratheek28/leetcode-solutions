// Last updated: 7/25/2026, 7:28:08 PM
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> res;
        if (s.size() < 10) return res;

        int right = 9;

        string currSub;
        for (int i = 0; i < 10; i++) {
            currSub.push_back(s[i]);
        }

        unordered_map<string, int> hashMap;
        hashMap[currSub]++;
        right++;

        while (right < s.size()) {
            currSub.erase(0, 1);
            currSub.push_back(s[right]);
            right++;
            hashMap[currSub]++;
        }

        for (const auto& pair: hashMap) {
            if (pair.second > 1) {
                res.push_back(pair.first);
            }
        }

        return res;
    }
};