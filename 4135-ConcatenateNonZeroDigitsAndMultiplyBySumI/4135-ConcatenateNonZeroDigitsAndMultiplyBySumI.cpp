// Last updated: 7/25/2026, 7:26:38 PM
class Solution {
public:
    long long sumAndMultiply(int n) {
        string x = "";
        long long sum = 0;

        string num = to_string(n);

        for (char digit : num) {
            if (digit != '0') {
                x.push_back(digit);
                sum += (digit - '0');
            }
        }

        if (x.size() == 0) return 0;

        return stoi(x) * sum;
    }
};