// Last updated: 7/25/2026, 7:27:29 PM
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>result(score.size());

        priority_queue<pair<int, int>> pq;

        for (int i = 0; i < score.size(); i++) {
            pq.push({score[i], i});
        }

        int pos = 1;
        while (!pq.empty()) {
            int index = pq.top().second;
            if (pos == 1) {
                result[index] = "Gold Medal";
            }else if (pos == 2) {
                result[index] = "Silver Medal";
            }else if (pos == 3) {
                result[index] = "Bronze Medal";
            }else {
                result[index] = to_string(pos);
            }
            pos++;
            pq.pop();
        }
        return result;
    }
};