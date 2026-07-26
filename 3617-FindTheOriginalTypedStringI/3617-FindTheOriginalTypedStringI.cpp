// Last updated: 7/25/2026, 7:26:40 PM
class Solution {
    int numOfRepeats(int index, string& word) {
        int count = 0;
        while (index < word.size() && (index + 1) < word.size() && word.at(index) == word.at(index + 1)) {
            count++;
            index++;
        }
        return count;
    }
public:
    int possibleStringCount(string word) {
        int count = 0;
        for (int i = 0; i + 1 < word.size(); i++) {
            if (word.at(i) == word.at(i + 1)) {
                int repeats = numOfRepeats(i, word);
                count += repeats;
                i += repeats;
            }
        }
        return (count + 1);
    }
};