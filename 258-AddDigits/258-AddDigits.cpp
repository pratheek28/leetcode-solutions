// Last updated: 7/25/2026, 7:27:50 PM
class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int temp = num;
            vector<int> digits;
            num = 0;
            while (temp > 0) {
                num += (temp % 10);
                temp /= 10;
            }
        }
        return num;
    }
};