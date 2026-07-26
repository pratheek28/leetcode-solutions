// Last updated: 7/25/2026, 7:29:38 PM
class Solution {
    void print(vector<string>& res) {
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> map = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"},
        };
        vector<string> res;

        for (int i = 0; i < digits.size(); i++) {
            string letters = map[digits[i]];

            if (res.size() == 0) {
                for (int j = 0; j < letters.size(); j++) {
                    string s = "";
                    s.push_back(letters[j]);
                    res.push_back(s);
                }
            }else {
                vector<string> temp;
                for (string s : res) {
                    for (char c : letters) {
                        string tmp = s;
                        tmp.push_back(c);
                        temp.push_back(tmp);
                    }
                }
                res = temp;
            }
        }

        return res;
    }
};