// Last updated: 7/25/2026, 7:27:05 PM
class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int maxHeight = INT_MIN;
        int maxWidth = INT_MIN;
        sort(horizontalCuts.begin(), horizontalCuts.end());
        for (int i = 0; i < horizontalCuts.size(); i++) {
            if (i == 0) {
                maxHeight = max(maxHeight, horizontalCuts[i] - 0);
            }else {
                maxHeight = max(maxHeight, horizontalCuts[i] - horizontalCuts[i - 1]);
            }
        }

        maxHeight = max(maxHeight, h - horizontalCuts[horizontalCuts.size() - 1]);

        sort(verticalCuts.begin(), verticalCuts.end());
        for (int i = 0; i < verticalCuts.size(); i++) {
            if (i == 0) {
                maxWidth = max(maxWidth, verticalCuts[i] - 0);
            }else {
                maxWidth = max(maxWidth, verticalCuts[i] - verticalCuts[i - 1]);
            }
        }

        maxWidth = max(maxWidth, w - verticalCuts[verticalCuts.size() - 1]);

        return (1LL*maxHeight*maxWidth) % 1000000007;
    }
};