// Last updated: 7/25/2026, 7:28:24 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        bool found = false;
        int num;
        for (int i = 0; i < size; i++) {
            num = nums.at(i);
            for (int j = 0; j < size; j++) {
                if (nums.at(j) == num && i != j) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return num;
            }
            found = false;
        }
        return num;
    }
};