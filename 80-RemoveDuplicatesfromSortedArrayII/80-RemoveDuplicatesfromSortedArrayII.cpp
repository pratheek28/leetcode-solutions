// Last updated: 8/14/2026, 11:13:39 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        unordered_map<int, int> mp;
5        int size = nums.size();
6
7        for (int i = 0; i < size; i++) {
8            if (mp[nums[i]] == 2) {
9                swap(nums[i], nums[size - 1]);
10                size--;
11                i--;
12            }else {
13                mp[nums[i]]++;
14            }
15        }
16
17        sort(nums.begin(), nums.begin() + size);
18
19        return size;
20    }
21};