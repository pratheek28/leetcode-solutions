// Last updated: 7/25/2026, 7:27:44 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int lo = 0;
        int hi = s.size() - 1;
        while (lo < hi) {
            swap(s.at(lo), s.at(hi));
            lo++;
            hi--;
        }
    }
};