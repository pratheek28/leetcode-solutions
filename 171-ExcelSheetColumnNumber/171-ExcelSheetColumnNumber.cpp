// Last updated: 7/25/2026, 7:28:10 PM
class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long multiplier = 1;
        int result = 0;
        for (int i = columnTitle.size() - 1; i >= 0; i--) {
            result += ((columnTitle.at(i) - 'A') + 1) * multiplier;
            multiplier *= 26;
        }
        return result;
    }
};