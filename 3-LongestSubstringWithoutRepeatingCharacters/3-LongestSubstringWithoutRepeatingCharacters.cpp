// Last updated: 10/11/2026, 10:42:46 AM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int hi = 0, lo = 0, res = 0;
5
6        unordered_map<char, int> mp;
7
8        while (hi < s.size()) {
9            mp[s[hi]]++;
10
11            while (mp[s[hi]] > 1) {
12                mp[s[lo]]--;
13                lo++;
14            }
15
16            hi++;
17            res = max(hi - lo, res);
18        }
19
20        return res;
21    }
22};