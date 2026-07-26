// Last updated: 7/25/2026, 7:26:58 PM
class Solution {
public:
    int numberOfWays(string corridor) {
        vector<int> pos;

        const int mod = 1e9 + 7;

        for (int i = 0; i < corridor.size(); i++) {
            if (corridor[i] == 'S') {
                pos.push_back(i);
            }
        }

        if (pos.size() == 0 || pos.size() % 2 == 1) return 0;

        long result = 1;

        for (int i = 2; i < pos.size(); i+=2) {
            int lenOfGap = pos[i] - pos[i - 1];
            result = (result * lenOfGap) % mod;
        }
        
        return result;
    }
};