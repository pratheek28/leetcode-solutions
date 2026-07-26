// Last updated: 7/25/2026, 7:27:56 PM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> solution;
        sort(nums.begin(), nums.end());
        int cutOff = nums.size() / 3;
        
        for (int i = 0; i < nums.size(); i++) {
            int numOccur = 1;
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    numOccur++;
                }else {
                    break;
                }
            }
            if (numOccur > cutOff) {
                solution.push_back(nums[i]);
            }
            i += (numOccur - 1);
        }

        return solution;
    }
};