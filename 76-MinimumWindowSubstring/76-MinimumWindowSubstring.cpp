// Last updated: 7/25/2026, 7:28:56 PM
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> map;
        int start = 0, end = 0;
        int d;
        int minLen = INT_MAX;
        int minStart = 0;
        int counter = t.size();

        for (char c : t) {
            map[c]++;
        }

        while (end < s.size()) {
            if (map[s[end]] > 0) {
                counter--;
            }
            map[s[end]]--;
            end++;


            while (counter == 0) {
                if (end - start < minLen) {
                    minStart = start;
                    minLen = end - start;
                }
                map[s[start]]++;
                if (map[s[start]] > 0) {
                    counter++;
                }
                start++;
            }
        }

        if (minLen != INT_MAX) {
            return s.substr(minStart, minLen);
        }
        return "";
    }
};