// Last updated: 8/12/2026, 8:52:18 PM
1class Solution {
2public:
3    int compareVersion(string version1, string version2) {
4        int i = 0, j = 0;
5
6        while (i < version1.size() || j < version2.size()) {
7            int num1 = 0;
8            while (i < version1.size() && version1[i] != '.') {
9                num1 = num1 * 10 + (version1[i] - '0');
10                i++;
11            }
12
13            int num2 = 0;
14            while (j < version2.size() && version2[j] != '.') {
15                num2 = num2 * 10 + (version2[j] - '0');
16                j++;
17            }
18
19            if (num1 < num2) return -1;
20            if (num1 > num2) return 1;
21            i++;
22            j++;
23        }
24        
25        return 0;
26    }
27};