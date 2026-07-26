// Last updated: 7/25/2026, 7:27:04 PM
class Solution {
public:
    int xorOperation(int n, int start) {
        int result = start;
        for (int i = 1; i < n; i++) {
            result ^= start + 2 * i;
        }
        return result;
    }
};