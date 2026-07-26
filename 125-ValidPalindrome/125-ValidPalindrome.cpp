// Last updated: 7/25/2026, 7:28:28 PM
class Solution {
public:
    bool isPalindrome(string s) {
        string forward;
        string backward;
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s.at(i)) || isdigit(s.at(i))) {
                forward.push_back(tolower(s.at(i)));
            }
        }
        cout << forward << endl;
        for (int i = s.size() - 1; i >=0; i--) {
            if (isalpha(s.at(i)) || isdigit(s.at(i))) {
                backward.push_back(tolower(s.at(i)));
            }
        }
        cout << backward << endl;
        if (forward == backward) {
            return true;
        }
        return false;
    }
};