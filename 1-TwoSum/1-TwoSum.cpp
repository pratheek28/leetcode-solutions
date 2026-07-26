// Last updated: 7/25/2026, 7:29:54 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;

        for (int i = 0; i < nums.size(); i++) {
            if (hashMap.find(target - nums[i]) != hashMap.end()){
                return {i, hashMap[target - nums[i]]};
            }
            hashMap[nums[i]] = i;
        }

        return {};
    }
};