// Last updated: 7/25/2026, 7:28:17 PM
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;

        for(int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" or tokens[i] == "-" or tokens[i] == "*" or tokens[i] == "/") {
                int num1 = stoi(s.top());
                s.pop();
                int num2 = stoi(s.top());
                s.pop();
                int result;
                if (tokens[i] == "+") result = num1 + num2;
                else if (tokens[i] == "-") result = num2 - num1;
                else if (tokens[i] == "*") result = num2 * num1;
                else result = num2 / num1;
                s.push(to_string(result));
            }else{
                s.push(tokens[i]);
            }
        }
        return stoi(s.top());
    }
};