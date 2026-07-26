// Last updated: 7/25/2026, 7:27:03 PM
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if ((coordinates[1] - '0') % 2 == 0) {
            if ((coordinates[0] - 'a') % 2 == 0) return true;
            return false;
        }else {
            if ((coordinates[0] - 'a') % 2 == 1) return true;
            return false;
        }
    }
};