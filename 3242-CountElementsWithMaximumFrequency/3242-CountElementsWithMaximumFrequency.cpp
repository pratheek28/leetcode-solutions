// Last updated: 7/25/2026, 7:26:46 PM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> fq;

        for (int num : nums) {
            fq[num]++;
        }
        priority_queue<int> pq;
        for (const auto& pair : fq) {
            pq.push(pair.second);
        }

        int prev = -1;
        int total = 0;

        while (prev == -1 || !pq.empty()) {
            if (prev == -1) {
                prev = pq.top();
                total += pq.top();
                pq.pop();
            }else if (prev == pq.top()) {
                total += pq.top();
                pq.pop();
            }else {
                break;
            }
        }
        return total;
    }
};