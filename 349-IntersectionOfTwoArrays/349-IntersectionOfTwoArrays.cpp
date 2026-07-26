// Last updated: 7/25/2026, 7:27:41 PM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int, int> map;

        for (int num : nums1) {
            map[num]++;
        }

        for (int num : nums2) {
            if (map.find(num) != map.end() and map.at(num) != 0) {
                map[num] = 0;
                result.push_back(num);
            }
        }

        return result;
    }
};