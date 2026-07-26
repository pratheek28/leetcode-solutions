// Last updated: 7/25/2026, 7:29:09 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        string temp;
        int size = s.size();
        for (int i = size - 1; i >= 0; i--) {
            if (s.at(i) != ' ') {
                temp.push_back(s.at(i));
            }
            else {
                if (temp.size() > 0) {
                    return temp.size();
                }
            }
        }
        return temp.size();
    }
};