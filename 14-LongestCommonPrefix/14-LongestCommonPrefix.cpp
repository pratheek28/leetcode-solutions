// Last updated: 7/25/2026, 7:29:41 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        string firstWord = strs.at(0);
        for (unsigned int i = 0; i < firstWord.size(); i++) {
            prefix.push_back(firstWord.at(i));
            for (unsigned int j = 1; j < strs.size(); j++) {
                string currWord = strs.at(j);

                if (currWord.find(prefix) == string::npos) {
                    prefix.pop_back();
                    return prefix;
                }
                else{
                    int result = currWord.find(prefix);
                    if (result != prefix.find(prefix)) {
                        prefix.pop_back();
                        return prefix;
                    }
                }
            }
        }
        return prefix;
    }
};