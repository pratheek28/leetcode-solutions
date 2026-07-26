// Last updated: 7/25/2026, 7:27:37 PM
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map;

        for (char& c : magazine) {
            map[c]++;
        }

        for (char&c : ransomNote) {
            if (map.find(c) == map.end() || map[c] == 0) return false;
            else {
                map[c]--;
            }
        }
        
        return true;
    }
};