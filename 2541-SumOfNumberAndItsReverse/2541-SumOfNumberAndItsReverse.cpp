// Last updated: 7/25/2026, 7:26:53 PM
class Solution {
    string reverse(string num) {
        int lo = 0;
        int hi = num.size() - 1;

        while (lo <= hi) {
            swap(num[lo], num[hi]);
            lo++;
            hi--;
        }
        return num;
    }
    bool helper(int num, int i) {
        string n = to_string(num);
        string sI = to_string(i);
        string reverseI = reverse(sI);

        int result = 0;

        return (num == stoi(sI) + stoi(reverseI));
    }
public:
    bool sumOfNumberAndReverse(int num) {
        if (num == 0) return true;
        
        for (int i = 1; i < num; i++) {
            if (helper(num, i)) return true;
        }
        
        return false;
    }
};