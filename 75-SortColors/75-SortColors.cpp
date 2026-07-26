// Last updated: 7/25/2026, 7:28:57 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int minIndex = i;
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums.at(j) < nums.at(minIndex)) {
                    minIndex = j;
                }
            }
            if (minIndex < nums.size()) {
                swap(nums.at(i), nums.at(minIndex));
            }
        }
    }
};