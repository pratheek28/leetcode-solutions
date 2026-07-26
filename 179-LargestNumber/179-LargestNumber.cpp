// Last updated: 7/25/2026, 7:28:09 PM
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> numsStr;

        for (int num : nums) {
            numsStr.push_back(to_string(num));
        }

        sort(numsStr.begin(), numsStr.end(), 
        [](const string& a, const string& b) {
            return a+b > b+a;
        });

        if (numsStr[0] == "0") return "0";

        string res;
        for (const string& s : numsStr) {
            res += s;
        }
        return res;

    }
};