// Last updated: 8/6/2026, 10:54:07 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int k=1;
5        int i=1;
6        while(i < nums.size()){
7            if(nums[i]!= nums[k-1]){
8        
9                nums[k] = nums[i];
10                k++;
11            }
12            i++;
13        }
14        return k;
15    }
16};