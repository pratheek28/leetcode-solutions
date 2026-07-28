// Last updated: 7/28/2026, 10:18:36 AM
1class Solution {
2public:
3    int trap(vector<int>& height) {
4        int left = 0;
5        int right = height.size() - 1;
6        int leftMax = height[left];
7        int rightMax = height[right];
8
9        int res = 0;
10
11        while (left < right) {
12            if (leftMax < rightMax) {
13                left++;
14                leftMax = max(leftMax, height[left]);
15                res += leftMax - height[left];
16            }else {
17                right--;
18                rightMax = max(rightMax, height[right]);
19                res += rightMax - height[right];
20            }
21        }
22        return res;
23    }
24};