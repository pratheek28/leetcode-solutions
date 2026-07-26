// Last updated: 7/25/2026, 7:29:42 PM
class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        for (unsigned int i = 0; i < s.size(); i++) {
            if (s.at(i) == 'I') {
                if (i + 1 != s.size()) {
                    if (s.at(i + 1) == 'V') {
                        total += 4;
                        i++;
                    }
                    else if (s.at(i + 1) == 'X') {
                        total += 9;
                        i++;
                    }
                    else {
                        total += 1;
                    }
                }
                else {
                    total += 1;
                }
            }
            else if (s.at(i) == 'X') {
                if (i + 1 != s.size()) {
                    if (s.at(i + 1) == 'L') {
                        total += 40;
                        i++;
                    }
                    else if (s.at(i + 1) == 'C') {
                        total += 90;
                        i++;
                    }
                    else {
                        total += 10;
                    }
                }
                else {
                    total += 10;
                }
            }
            else if (s.at(i) == 'C') {
                if (i + 1 != s.size()){
                    if (s.at(i + 1) == 'D'){
                        total += 400;
                        i++;
                    }
                    else if (s.at(i + 1) == 'M') {
                        total += 900;
                        i++;
                    }
                    else {
                        total += 100;
                    }
                }
                else {
                    total += 100;
                }
            }
            else if (s.at(i) == 'V') {
                total += 5;
            }
            else if (s.at(i) == 'L') {
                total += 50;
            }
            else if (s.at(i) == 'D') {
                total += 500;
            }
            else if (s.at(i) == 'M') {
                total += 1000;
            }
        }
        return total;
    }
};