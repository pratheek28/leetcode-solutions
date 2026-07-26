// Last updated: 7/25/2026, 7:27:46 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        queue<int> q;

        for (int num : nums) {
            if (num != 0) q.push(num);
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!q.empty()) {
                nums[i] = q.front();
                q.pop();
            }else {
                nums[i] = 0;
            }
        }

        return;
    }
};