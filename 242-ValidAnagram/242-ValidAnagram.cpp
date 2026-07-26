// Last updated: 7/25/2026, 7:27:51 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> fq;

        for (int i = 0 ; i < s.size(); i++) {
            fq[s[i]]++;

            fq[t[i]]--;
        }

        for (const auto& pair : fq) {
            if (pair.second != 0) return false;
        }
        return true;
    }
};