// Last updated: 7/25/2026, 7:26:48 PM
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string res = "";
        int lo = 0;
        int hi = 0;
        int minLen = INT_MAX;
        int counter = k;

        while (hi < s.size()) {
            if (s[hi] == '1') {
                counter--;
            }
            
            while (counter == 0) {
                int currLen = hi - lo + 1;
                string currSub = s.substr(lo, hi - lo + 1);

                if (hi - lo + 1 < minLen) {
                    res = currSub;
                    minLen = currLen;
                }else if (hi - lo + 1 == minLen) {
                    if (currSub < res) {
                        res = currSub;
                    }
                }

                if (s[lo] == '1') {
                    counter++;
                }
                lo++;
            }

            hi++;
        }

        return res;
    }
};