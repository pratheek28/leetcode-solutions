// Last updated: 7/25/2026, 7:29:40 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;

        sort(nums.begin(), nums.end());

        for (int i = 0; i + 1 < nums.size(); i++) {
            int j = i + 1;
            int k = nums.size() - 1;

            if (i > 0 && nums[i] == nums[i - 1]) continue;

            while (j < k) {
                int total = nums[i] + nums[j] + nums[k];

                if (total == 0) {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;

                    while (nums[j] == nums[j - 1] && j < k) {
                        j++;
                    }
                }
                else if (total < 0) {
                    j++;
                }else{
                    k--;
                }
            }
        }
        return res;
    }
};