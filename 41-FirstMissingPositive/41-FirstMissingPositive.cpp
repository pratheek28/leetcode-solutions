// Last updated: 7/31/2026, 6:16:45 PM
1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4        int size = nums.size();
5        int i = 0;
6
7        while (i < size) {
8            if (nums[i] > 0 && nums[i] <= size && nums[i] != nums[nums[i] - 1]) {
9                swap(nums[i], nums[nums[i] - 1]);
10            }else {
11                i++;
12            }
13        }
14
15        for (int i = 0; i < size; i++) {
16            if (nums[i] != i + 1) {
17                return i + 1;
18            }
19        }
20
21        return size + 1;
22        
23    }
24};