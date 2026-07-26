// Last updated: 7/25/2026, 7:26:55 PM
class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int maxId = 0;
        int maxTime = 0;
        int prev = 0;

        for (int i = 0; i < logs.size(); i++) {
            if (i == 0) {
                maxId = logs[0][0];
                prev = maxTime = logs[0][1];
            }else {
                if (logs[i][1] - prev == maxTime) {
                    maxId = min(maxId, logs[i][0]);
                }else if (logs[i][1] - prev > maxTime) {
                    maxTime = logs[i][1] - prev;
                    maxId = logs[i][0];
                }
                prev = logs[i][1];
            }
        }

        return maxId;

        
    }
};