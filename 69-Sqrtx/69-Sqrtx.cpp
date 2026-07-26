// Last updated: 7/25/2026, 7:29:03 PM
class Solution {
public:
    int mySqrt(int x) {
        long long int i = 0;
        while ((i+1) * (i+1) <= x) {
            i++;
        }
        return i;
    }
};