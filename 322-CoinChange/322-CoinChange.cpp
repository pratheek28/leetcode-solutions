// Last updated: 7/25/2026, 7:27:45 PM
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> res(amount + 1, 1e9);
        res[0] = 0;

        for (int x = 1; x <= amount; x++) {
            for (int coin : coins) {
                if (x - coin >= 0) {
                    res[x] = min(res[x], res[x - coin] + 1);
                }
            }
        }

        if (res[amount] == 1e9) return -1;
        return res[amount];
    }
};