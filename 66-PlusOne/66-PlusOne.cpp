// Last updated: 7/25/2026, 7:29:04 PM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        for (int i = size - 1; i >= 0; i--) {
            if (digits.at(i) != 9) {
                digits.at(i) += 1;
                break;
            }
            else {
                digits.at(i) = 0;
                if (i == 0) {
                    digits.at(i) = 1;
                    digits.push_back(0);
                }
            }
        }
         return digits;
    }
};