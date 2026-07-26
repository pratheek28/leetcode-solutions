// Last updated: 7/25/2026, 7:29:43 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0;
        int currArea = 0;

        int lo = 0;
        int hi = height.size() - 1;

        while (lo < hi) {
            currArea = (hi - lo) * min(height[hi], height[lo]);
            result = max(currArea, result);

            if (height[lo] < height[hi]) {
                lo++;
            }else {
                hi--;
            }
        }
        return max(result, currArea);
    }
};