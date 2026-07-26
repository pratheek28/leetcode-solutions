// Last updated: 7/25/2026, 7:26:44 PM
class Solution {
public:
    bool doesAliceWin(string s) {
        int numOfVowels = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') numOfVowels++;
        }

        if (numOfVowels % 2 == 1) return true;

        int numAlice = numOfVowels - 1;

        if (numAlice >= 1) return true;

        return false;
    }
};