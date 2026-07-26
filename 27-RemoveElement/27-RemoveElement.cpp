// Last updated: 7/25/2026, 7:29:29 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums.at(i) == val) {
                for (int j = i + 1; j < size; j++) {
                    nums.at(i) = nums.at(j);
                }
                size--;
                i--;
            }
        }
        return size;
    }
};