// Last updated: 7/25/2026, 7:27:42 PM
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        for (const auto& pair : mp) {
            pq.push({pair.second, pair.first});
        }

        int idx = 0;
        vector<int> sol(k);
        while (!pq.empty()) {
            if (idx < k) {
                sol[idx] = pq.top().second;
                pq.pop();
                idx++;
            }else {
                break;
            }
        }
        return sol;
    }
};