// Last updated: 7/25/2026, 7:27:14 PM
class Solution {
    void helper(int& count, unordered_map<int, int>& hashMap) {

    }
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int, int> hashMap;
        int count = 0;

        for (int i = 0; i < time.size(); i++) {
            hashMap[time[i] % 60]++;
        }

        for (int i = 0; i < time.size(); i++) {
            int val = time[i] % 60;

            if (val == 0) {
                if (hashMap.find(0) != hashMap.end()) {
                    hashMap[val]--;
                    if (hashMap[val] >= 1) count += hashMap[val];
                }
            }else {
                if (hashMap.find(60 - val) != hashMap.end()) {
                    hashMap[val]--;
                    if (hashMap[60 - val] >= 1) count+=hashMap[60 - val];
                }
            }
        }

        return count;
    }
};