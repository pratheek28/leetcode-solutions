// Last updated: 7/25/2026, 7:29:23 PM
class Solution {
public:
    string countAndSay(int n) {
        string res = "1";

        for (int i = 2; i <= n; i++) {
            string curr = "";
            for (int j = 0; j < res.size();) {
                int counter = 1;
                while (j + counter < res.size() && res[j] == res[j + counter]) {
                    counter++;
                }
                curr += to_string(counter);
                curr += res[j];

                j+= counter;
            }
            res = curr;
        }

        return res;
    }
};