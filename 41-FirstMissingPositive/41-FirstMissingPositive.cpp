// Last updated: 7/31/2026, 6:01:19 PM
1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4        map<int, int> mp;
5
6        for (int num : nums) {
7            mp[num] = 1;
8        }
9
10        int ans = 1;
11
12        for (auto i = mp.begin(); i != mp.end(); i++) {
13            if (ans == i->first) {
14                ans++;
15            }
16        }
17
18        return ans;
19    }
20};