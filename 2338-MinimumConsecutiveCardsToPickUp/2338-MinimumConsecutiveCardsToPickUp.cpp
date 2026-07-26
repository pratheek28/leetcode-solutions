// Last updated: 7/25/2026, 7:26:56 PM
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int sol = INT_MAX;

        unordered_map<int, int> fq;

        for (int i = 0; i < cards.size(); i++) {
            if (fq.find(cards[i]) != fq.end()) {
                sol = min(sol, i - fq[cards[i]] + 1);
            }
            fq[cards[i]] = i;
        }

        if (sol == INT_MAX) return -1;
        return sol;
        
    }
};