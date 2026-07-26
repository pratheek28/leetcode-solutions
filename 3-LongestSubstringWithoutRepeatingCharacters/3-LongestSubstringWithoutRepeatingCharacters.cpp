// Last updated: 7/25/2026, 7:29:53 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        unordered_map<char, int> hashMap;
        int lo = 0;
        int hi = 0;

        while (hi < s.size()) {
            if (hashMap.find(s[hi]) == hashMap.end() || hashMap[s[hi]] == 0) {
                hashMap[s[hi]]++;
                result = max(result, (hi - lo) + 1);
                hi++;
            }else {
                hashMap[s[lo]]--;
                lo++;
            }
        }
        return result;
    }
};