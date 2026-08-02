// Last updated: 8/1/2026, 5:46:20 PM
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5    
6        int res = nums[0] + nums[1] + nums[2];
7
8        for (int i = 0; i < nums.size(); i++) {
9            int j = i + 1;
10            int k = nums.size() - 1;
11
12            while (j < k) {
13                int total = nums[i] + nums[j] + nums[k];
14
15                if (abs(target - total) < abs(target - res)) {
16                    res = total;
17                }
18
19                if (total < target) {
20                    j++;
21                }else if (total > target) {
22                    k--;
23                }else {
24                    return target;
25                }
26            }
27        }
28        return res;
29    }
30};