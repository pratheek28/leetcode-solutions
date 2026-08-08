// Last updated: 8/7/2026, 8:48:27 PM
1class Solution {
2public:
3    vector<vector<int>> generateMatrix(int n) {
4        vector<vector<int>> sol(n, vector<int>(n, 0));
5
6        int i = 0;
7        int j = 0;
8        bool done = false;
9        int val = 1;
10        char direction = 'r';
11
12        while (!done) {
13            if (i >= n || j >= n) break;
14
15            sol[i][j] = val;
16            val++;
17
18            if (direction == 'r') {
19                if (j + 1 == n || sol[i][j + 1] != 0) {
20                    direction = 'd';
21                    i++;
22                    if (i < n && j < n && sol[i][j] != 0) done = true;
23                }else {
24                    j++;
25                }
26            }else if (direction == 'd') {
27                if (i + 1 == n || sol[i + 1][j] != 0) {
28                    direction = 'l';
29                    j--;
30                    if (i < n && j < n && sol[i][j] != 0) done = true;
31                }else {
32                    i++;
33                }
34            }else if (direction == 'l') {
35                if (j - 1 < 0 || sol[i][j - 1] != 0) {
36                    direction = 't';
37                    i--;
38                    if (i < n && j < n && sol[i][j] != 0) done = true;
39                }else {
40                    j--;
41                }
42            }else {
43                if (i - 1 < 0 || sol[i - 1][j] != 0) {
44                    direction = 'r';
45                    j++;
46                    if (i < n && j < n && sol[i][j] != 0) done = true;
47                }else {
48                    i--;
49                }
50            }
51        }
52        return sol;
53    }
54};