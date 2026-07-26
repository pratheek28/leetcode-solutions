// Last updated: 7/25/2026, 7:27:22 PM
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string> st;
        for (string s : operations) {
            if (s == "C") {
                st.pop();
            }else if (s == "D") {
                st.push(to_string(stoi(st.top()) * 2));
            }else if (s == "+") {
                int num1 = stoi(st.top());
                st.pop();
                int num2 = stoi(st.top());
                st.pop();
                st.push(to_string(num2));
                st.push(to_string(num1));
                st.push(to_string(num1 + num2));
            }else {
                st.push(s);
            }
        }
            int sum = 0;
            while (!st.empty()) {
                sum += stoi(st.top());
                st.pop();
            }
            return sum;
    }
};