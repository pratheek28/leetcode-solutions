// Last updated: 7/25/2026, 7:27:09 PM
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res(n);
        res[0] = n * (1 - n) / 2;
        for (int i = 1; i < n; i++) {
            res[i] = i;
        }
        return res;
    }
};