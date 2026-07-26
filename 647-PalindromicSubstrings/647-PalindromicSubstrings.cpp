// Last updated: 7/25/2026, 7:27:23 PM
class Solution {
    bool isPalindrome(string& s, int start, int end){
        if (start > end) return false;
        while (start <= end) {
            if (s[start] != s[end]) return false;

            start++;
            end--;
        }
        return true;
    }
    int helper(string& s, int n) {
        // if (n == 0) return s.size();

        int num = 0;

        for (int i = 0; i < s.size() - n; i++) {
            if (isPalindrome(s, i, i + n)) num++;
        }

        return num;
    }
public:
    int countSubstrings(string s) {
        int num = 0;
        int idx = 0;
        int result = -1;

        while (idx < s.size()) {
            result = helper(s, idx);
            num += result;
            idx++;
        }

        return num;
    }
};