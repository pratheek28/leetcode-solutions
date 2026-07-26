// Last updated: 7/25/2026, 7:29:51 PM
class Solution {
    int expandAroundCenter(const string& s, int left, int right) {
        while (left >= 0 and right < s.size() and s[left] == s[right]) {
            left--;
            right++;
        }
        return right-left-1;
    }
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start = 0;
        int end = 0;

        for (int i = 0; i < s.size(); i++) {
            int odd = expandAroundCenter(s, i, i);
            int even = expandAroundCenter(s, i, i + 1);

            int maxLen = max(odd, even);

            if (maxLen > end - start) {
                start = i - (maxLen - 1) / 2;
                end = i + (maxLen / 2);
            }
        }
        return s.substr(start, end - start + 1);
    }
};