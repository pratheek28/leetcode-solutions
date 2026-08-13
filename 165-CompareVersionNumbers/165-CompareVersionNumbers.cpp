// Last updated: 8/12/2026, 8:55:34 PM
1class Solution {
2public:
3    int compareVersion(string version1, string version2) {
4        int idx1 = 0;
5        int idx2 = 0;
6
7        while (idx1 < version1.size() || idx2 < version2.size()) {
8            int val1 = 0;
9            int val2 = 0;
10
11            while (idx1 < version1.size() && version1[idx1] != '.') {
12                val1 = val1 * 10 + (version1[idx1] - '0');
13                idx1++;
14            }
15            
16            while (idx2 < version2.size() && version2[idx2] != '.') {
17                val2 = val2 * 10 + (version2[idx2] - '0');
18                idx2++;
19            }
20
21
22            if (val1 < val2) return -1;
23            if (val2 < val1) return 1;
24
25            idx1++;
26            idx2++;
27        }
28        return 0;
29    }
30};