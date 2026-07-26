// Last updated: 7/25/2026, 7:27:02 PM
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int numNeg = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) return 0;
            else if (nums[i] < 0) numNeg++;
        }

        if (numNeg % 2 == 1) return -1;
        return 1;
    }
};