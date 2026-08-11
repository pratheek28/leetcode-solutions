// Last updated: 8/10/2026, 10:17:46 PM
1class Solution {
2public:
3    int hammingWeight(int n) {
4        int res = 0;
5
6        for (int i = 0; i < 32; i++) {
7            if ((n >> i) & 1) {
8                res += 1;
9            }
10        }
11
12        return res;
13    }
14};