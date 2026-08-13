// Last updated: 8/12/2026, 8:38:56 PM
1class Solution {
2public:
3    int maxSubarrayLength(vector<int>& nums, int k) {
4        int res = -1;
5
6        unordered_map<int, int> fq;
7
8        int lo = 0;
9        int hi = 0;
10
11        while (lo < nums.size() && hi < nums.size()) {
12            if (fq.find(nums[hi]) != fq.end() && fq[nums[hi]] == k) {
13                fq[nums[lo]]--;
14                res = max(res, hi - lo);
15                lo++;
16            }else {
17                fq[nums[hi]]++;
18                hi++;
19            }
20        }
21
22        return max(res, hi - lo);
23    }
24};