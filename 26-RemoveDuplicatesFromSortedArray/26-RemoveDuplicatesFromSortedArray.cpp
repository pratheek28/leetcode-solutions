// Last updated: 7/25/2026, 7:29:30 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        for (int i = 0; i + 1 < size; i++) {
            if (nums.at(i) == nums.at(i + 1)) {
                for (int j = i + 1; j + 1 < size; j++) {
                    nums.at(j) = nums.at(j + 1);
                }
                size--;
                i--;
                // if (i != 0) {
                //     i--;
                // }
            }
        }
        return size;
    }
};