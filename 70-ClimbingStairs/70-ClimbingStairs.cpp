// Last updated: 7/25/2026, 7:29:02 PM
class Solution {
public:
    int climbStairs(int n) {
        int num1 = 0;
        int num2 = 1;
        int result = 0;

        for (int i = 0; i < n; i++) {
            result = num1 + num2;
            num1 = num2;
            num2 = result;
        }

        if (result == 0) return num1;
        return result;
    }
};