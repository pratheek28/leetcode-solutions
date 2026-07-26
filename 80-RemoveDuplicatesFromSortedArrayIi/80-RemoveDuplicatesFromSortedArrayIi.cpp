// Last updated: 7/25/2026, 7:28:54 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> numMap;
        int size = nums.size();

        for (int i = 0; i < size; i++) {
            if (numMap[nums[i]] == 2) {
                swap(nums[i], nums[size - 1]);
                size--;
                i--;
            }else {
                numMap[nums[i]]++;
            }
        }
        sort(nums.begin(), nums.begin() + (size));


        return (size);
    }
};