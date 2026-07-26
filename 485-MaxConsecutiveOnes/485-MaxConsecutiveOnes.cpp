// Last updated: 7/25/2026, 7:27:31 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0;
        int maxStreak = INT_MIN;

        for (int i : nums) {
            if (i == 1) {
                curr++;
            }else {
                maxStreak = max(curr, maxStreak);
                curr = 0; 
            }
        }
        if (curr > 0) {
            maxStreak = max(curr, maxStreak);
        }
        return maxStreak;
    }
};