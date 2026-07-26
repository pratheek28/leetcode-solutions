// Last updated: 7/25/2026, 7:26:51 PM
class Solution {
public:
    int addMinimum(string word) {
        int size = word.size();
        int i = 0;
        int result = 0;

        while (i < size) {
            int count = 0;

            if (word[i] == 'a') {
                count++;
                i++;
            }

            if (i < size and word[i] == 'b'){
                count++;
                i++;
            }

            if (i < size and word[i] == 'c') {
                count++;
                i++;
            }

            result += (3 - count);
        }

        return result;
    }
};