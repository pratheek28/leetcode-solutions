// Last updated: 7/25/2026, 7:26:39 PM
class Solution {
public:
    int findClosest(int x, int y, int z) {
       if (abs(x - z) == abs(y - z)) return 0;
       if (abs(x - z) < abs(y - z)) return 1;
       return 2;
    }
};