// Last updated: 8/5/2026, 5:54:56 PM
1class Solution {
2public:
3    int candy(vector<int>& ratings) {
4        vector<int> candy(ratings.size(), 1);
5
6        for (int i = 1; i < ratings.size(); i++) {
7            if (ratings[i] > ratings[i - 1]) candy[i] = candy[i - 1] + 1;
8                
9        }
10
11        int res = 0;
12
13        for (int i = ratings.size() - 1; i > 0; i--) {
14            if (ratings[i - 1] > ratings[i]) candy[i - 1] = max(candy[i] + 1, candy[i - 1]);
15
16            res += candy[i - 1];
17        }
18
19        return res + candy[ratings.size() - 1];
20    }
21};