// Last updated: 7/25/2026, 7:27:20 PM
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> sol(temperatures.size(), 0);
        stack<int> st;

        for (int i = 0; i < temperatures.size(); i++) {
            int temp = temperatures[i];

            while (!st.empty() && temp > temperatures[st.top()]) {
                int idx = st.top();
                st.pop();

                sol[idx] = (i - idx);
            }

            st.push(i);
        }

        return sol;
    }
};