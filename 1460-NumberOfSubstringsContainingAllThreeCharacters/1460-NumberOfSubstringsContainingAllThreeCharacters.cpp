// Last updated: 7/25/2026, 7:27:07 PM
class Solution {
public:
    int numberOfSubstrings(string s) {
        int start = 0;
        int end = 0;
        int counter = 3;

        int res = 0;

        unordered_map<char, int> map = {
            {'a', 1},
            {'b', 1},
            {'c', 1},
        };

        while (end < s.size()) {
            if (map[s[end]] > 0) {
                counter--;
            }
            map[s[end]]--;
            end++;

            while (counter == 0) {
                map[s[start]]++;

                if (map[s[start]] > 0) {
                    counter++;
                }

                res += s.size() - end + 1;
                start++;
            }
        }

        return res;
    }
};