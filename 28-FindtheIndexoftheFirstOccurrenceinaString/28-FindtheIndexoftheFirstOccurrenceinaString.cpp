// Last updated: 8/6/2026, 11:02:30 PM
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        if (needle.size() > haystack.size()) return -1;
5
6        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
7            if (haystack[i] == needle[0]) {
8                string str = haystack.substr(i, needle.size());
9
10                if (str == needle) return i;
11            }
12        }
13        
14        return -1;
15    }
16};