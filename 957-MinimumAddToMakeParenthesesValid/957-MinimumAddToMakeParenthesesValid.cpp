// Last updated: 7/25/2026, 7:27:18 PM
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (c == '(') {
                st.push(c);
            }else {
                if (st.empty() || st.top() == ')') {
                    st.push(c);
                }else st.pop();
            }
        }

        return st.size();
    }
};