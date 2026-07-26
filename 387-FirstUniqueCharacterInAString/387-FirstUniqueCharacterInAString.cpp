// Last updated: 7/25/2026, 7:27:36 PM
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> frequency;

        for (int i = 0; i < s.size(); i++) {
            frequency[s[i]]++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (frequency[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};