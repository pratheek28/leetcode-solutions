// Last updated: 8/11/2026, 8:23:38 PM
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int lo = 0;
5        int hi = matrix.size() - 1;
6
7        while (lo <= hi) {
8            int mid = lo + (hi - lo) / 2;
9
10            int innerLo = 0;
11            int innerHi = matrix[mid].size() - 1;
12
13            int vectorStartIdx = mid * matrix[mid].size();
14            int vectorEndIdx = (mid * matrix[mid].size()) + matrix[mid].size() - 1;
15
16            while (innerLo <= innerHi) {
17                int innerMid = innerLo + (innerHi - innerLo) / 2;
18
19                if (matrix[mid][innerMid] == target) return true;
20
21                if (matrix[mid][innerMid] < target) {
22                    innerLo = innerMid + 1;
23                }else {
24                    innerHi = innerMid - 1;
25                }
26            }
27
28            // if (innerLo >= vectorStartIdx && innerLo <= vectorEndIdx && innerHi >= vectorStartIdx && innerHi <= vectorEndIdx) return false;
29
30            // if (innerHi < innerLo) {
31            //     hi = mid - 1;
32            // }else {
33            //     lo = mid + 1;
34            // }
35
36            if (innerHi < 0) {
37                hi = mid - 1;
38            }else if (innerLo >= matrix[mid].size()) {
39                lo = mid + 1;
40            }else {
41                return false;
42            }
43        }
44
45        return false;
46    }
47};