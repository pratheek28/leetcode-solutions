// Last updated: 7/25/2026, 7:28:16 PM
class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string solution;
        string word;

        for (char c : s) {
            if (c == ' ') {
                if (!word.empty()) {
                    st.push(word);
                    word = "";
                }
            }else {
                word.push_back(c);
            }
        }

        if (!word.empty()) st.push(word);

        while (!st.empty()) {
            solution += (st.top());
            st.pop();
            if(!st.empty()) {
                solution += " ";
            }
        }
        return solution;
    }
};