// Last updated: 7/25/2026, 7:29:37 PM
class Solution {
public:
    bool isValid(string s) {
        stack<char> strings;
        bool pairFound = false;

        for (int i = 0; i < s.size(); i++) {
            pairFound = false;
            if (s[i] == '(' or s[i] == '{' or s[i] == '[') {
                strings.push(s[i]);
            }else if (s[i] == ')') {
                pairFound = false;
                if (strings.size() <= 0 or strings.top() != '(') {
                    return false;
                }else {
                    strings.pop();
                    pairFound = true;
                }
            }else if (s[i] == '}') {
                pairFound = false;
                if (strings.size() <= 0 or strings.top() != '{') {
                    return false;
                }else {
                    strings.pop();
                    pairFound = true;
                }
            }else {
                pairFound = false;
                if (strings.size() <= 0 or strings.top() != '[') {
                    return false;
                }else {
                    strings.pop();
                    pairFound = true;
                }
            }
        }
        if (pairFound and strings.size() == 0) return true;
        return false;
    }
};