// Last updated: 7/25/2026, 7:27:43 PM
class Solution {
public:
    string reverseVowels(string s) {
        int lo = 0;
        int hi = s.size() - 1;

        bool loFound = false;
        bool hiFound = false;

        while (lo < hi) {
            if (tolower(s.at(lo)) == 'a' || tolower(s.at(lo)) == 'e' || tolower(s.at(lo)) == 'i' || tolower(s.at(lo)) == 'o' || tolower(s.at(lo)) == 'u') {
                loFound = true;
            }
            if (tolower(s.at(hi)) == 'a' || tolower(s.at(hi)) == 'e' || tolower(s.at(hi)) == 'i' || tolower(s.at(hi)) == 'o' || tolower(s.at(hi)) == 'u') {
                hiFound = true;
            }

            if (hiFound && loFound) {
                swap(s.at(lo), s.at(hi));
                loFound = false;
                hiFound = false;
                lo++;
                hi--;
            }else if (!loFound && !hiFound) {
                lo++;
                hi--;
            }else if (!loFound && hiFound) {
                lo++;
            }else if (!hiFound && loFound) {
                hi--;
            }
        }
        return s;
    }
};