// Last updated: 7/25/2026, 7:26:57 PM
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count = 0;
        long long streak = 0;

        for (int num: nums) {
            if (num == 0) {
                streak++;
                count += streak;
            }
            else {
                streak = 0;
            }
        }

        return count;
    }
};