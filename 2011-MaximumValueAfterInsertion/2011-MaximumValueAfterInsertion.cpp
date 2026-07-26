// Last updated: 7/25/2026, 7:27:01 PM
class Solution {
public:
    string maxValue(string n, int x) {
        if (n[0] == '-') {
            for (int i = 1; i < n.size(); i++) {
                if (n[i] - '0' > x) {
                    n.insert(n.begin() + i, x + '0');
                    return n;
                }
            }
            n.push_back((x + '0'));
            return n;
        }
        for (int i = 0; i < n.size(); i++) {
            if ((n[i] - '0') < x) {
                n.insert(n.begin() + i, x + '0');
                return n;
            }
        }
        n.push_back((x + '0'));
        return n;
    }
};