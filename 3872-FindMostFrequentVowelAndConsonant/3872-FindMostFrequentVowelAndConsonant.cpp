// Last updated: 7/25/2026, 7:26:42 PM
class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> fq;
        int vMax = 0;
        int cMax = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' ||s[i]== 'e' ||s[i]== 'i' ||s[i]== 'o' ||s[i]== 'u') {
                fq[s[i]]++;
                vMax = max(vMax, fq[s[i]]);
            }else {
                fq[s[i]]++;
                cMax = max(cMax, fq[s[i]]);
            }
        }

        return vMax + cMax;
        
    }
};