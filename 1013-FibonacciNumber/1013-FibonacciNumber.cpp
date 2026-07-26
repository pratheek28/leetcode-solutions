// Last updated: 7/25/2026, 7:27:15 PM
class Solution {
public:
    int fib(int n) {
        if (n == 0) {
            return 0;
        }
        int first = 0;
        int second = 1;
        int sum = first + second;
        for (int i = 2; i < n; i++) {
            first = second;
            second = sum;
            sum = first + second;
        }
        return sum;
    }
};