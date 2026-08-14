// Last updated: 8/13/2026, 9:16:01 PM
1class Solution {
2public:
3    int longestValidParentheses(string s) {
4        int n = s.length(), longest = 0;
5        stack<int> st;
6        for (int i = 0; i < n; i++) {
7            if (s[i] == '(') st.push(i);
8            else {
9                if (!st.empty()) {
10                    if (s[st.top()] == '(') st.pop();
11                    else st.push(i);
12                }
13                else st.push(i);
14            }
15        }
16        if (st.empty()) longest = n;
17        else {
18            int a = n, b = 0;
19            while (!st.empty()) {
20                b = st.top(); st.pop();
21                longest = max(longest, a-b-1);
22                a = b;
23            }
24            longest = max(longest, a);
25        }
26        return longest;
27    }
28};