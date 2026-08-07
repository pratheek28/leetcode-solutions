// Last updated: 8/6/2026, 10:56:16 PM
1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int size = nums.size();
5        for (int i = 0; i < size; i++) {
6            if (nums[i] == val) {
7                for (int j = i + 1; j < size; j++) {
8                    nums[i] = nums[j];
9                }
10                size--;
11                i--;
12            }
13        }
14        return size;
15    }
16};