// Last updated: 8/11/2026, 8:33:20 PM
1class Solution {
2public:
3    string reverseWords(string s) {
4        int idx = 0;
5        string res = "";
6
7        stack<string> st;
8
9        while (idx < s.size() && s[idx] == ' ') {
10            idx++;
11        }
12
13        while (idx < s.size()) {
14            string temp = "";
15
16            while (idx < s.size() && s[idx] != ' ') {
17                temp.push_back(s[idx]);
18                idx++;
19            }
20
21            st.push(temp);
22
23            while (idx < s.size() && s[idx] == ' ') {
24                idx++;
25            }
26        }
27
28        while (!st.empty()) {
29            res += st.top();
30            st.pop();
31
32            if (!st.empty()) {
33                res += " ";
34            }
35        }
36
37        return res;
38    }
39};