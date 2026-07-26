// Last updated: 7/25/2026, 7:28:23 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int solution;
        unordered_map<int, int> numMap;

        for (int& num : nums) {
            numMap[num]++;
        }

        for (int& num: nums) {
            if (numMap[num] == 1) {
                solution = num;
                break;
            }
        }
        return solution;
    }
};