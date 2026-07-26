// Last updated: 7/25/2026, 7:27:35 PM
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;
        char solution;

        for (char& c : s) {
            sMap[c] = sMap[c] + 1;
        }

        for (char&c : t) {
            tMap[c]++;
        }

        for (char&c : t) {
            if (sMap[c] != tMap[c]) {
                solution = c;
                break;
            }
        }
        return solution;
    }
};