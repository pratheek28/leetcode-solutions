// Last updated: 7/25/2026, 7:26:50 PM
class Solution {
public:
    string sortVowels(string s) {
        priority_queue<char, vector<char>, greater<char>> pq;

        for (char c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                pq.push(c);
            }
        }

        string res = "";

        for (char c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                res.push_back(pq.top());
                pq.pop();
            }else res.push_back(c);
        }
        return res;
    }
};