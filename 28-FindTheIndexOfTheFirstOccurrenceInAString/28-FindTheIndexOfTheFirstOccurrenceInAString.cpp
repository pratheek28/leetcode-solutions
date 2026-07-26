// Last updated: 7/25/2026, 7:29:28 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        for (unsigned int i = 0; i < haystack.size(); i++) {
            for (unsigned int j = 0; j < needle.size(); j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
                else if (j == needle.size() - 1) {
                    return i;
                }
            }
        }
        return -1;
    }
};