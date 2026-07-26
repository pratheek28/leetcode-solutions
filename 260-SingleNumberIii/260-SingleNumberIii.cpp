// Last updated: 7/25/2026, 7:27:49 PM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> solution;
        unordered_map<int, int> numMap;


        for (int& num : nums) {
            numMap[num]++;
        }

        for (int& num : nums) {
            if (numMap[num] == 1) {
                solution.push_back(num);
            }
            if (solution.size() == 2) break;
        }
        return solution;
    }
};