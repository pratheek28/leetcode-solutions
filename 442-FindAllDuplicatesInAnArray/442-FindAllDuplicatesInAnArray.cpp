// Last updated: 7/25/2026, 7:27:33 PM
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;

        unordered_map<int, int> map;

        for (int num : nums) {
            map[num]++;
            if (map.at(num) == 2) {
                result.push_back(num);
            }
        }
        return result;
    }
};