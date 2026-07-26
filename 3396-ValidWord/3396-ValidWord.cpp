// Last updated: 7/25/2026, 7:26:45 PM
class Solution {
public:
    bool isValid(string word) {

        if (word.size() < 3) return false;

        bool hasVowel = false;
        bool hasConsonant = false;
        for (char c : word) {
            int asciiNum = static_cast<int>(c);

            if ( !(asciiNum >= '0' and asciiNum <= '9') && !(asciiNum >= 'A' and asciiNum <= 'Z') && !(asciiNum >= 'a' and asciiNum <= 'z')) {
                return false;
            }else if ((asciiNum >= 'A' and asciiNum <= 'Z') or (asciiNum >= 'a' and asciiNum <= 'z')) {
                if (asciiNum == 'A' or asciiNum == 'E' or asciiNum == 'I' or asciiNum == 'O' or asciiNum == 'U') {
                    hasVowel = true;
                }else if (asciiNum == 'a' or asciiNum == 'e' or asciiNum == 'i' or asciiNum == 'o' or asciiNum == 'u') {
                    hasVowel = true;
                }else {
                    hasConsonant = true;
                }
            }
        }

        return (hasVowel and hasConsonant);
    }
};