// Last updated: 8/6/2026, 11:03:03 PM
// class Solution {
// public:
//     int strStr(string haystack, string needle) {

//         int n = haystack.length();
//         int m = needle.length();

//         for (int i = 0; i <= n - m; i++) {

//             if (haystack.substr(i, m) == needle) {
//                 return i;
//             }
//         }

//         return -1;
//     }
// };


class Solution {
public:
    int strStr(string haystack, string needle) {

        int n = haystack.length();
        int m = needle.length();

        // Check every possible starting position
        for (int i = 0; i <= n - m; i++) {

            int j = 0;

            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }

            if (j == m)
                return i;
        }

        return -1;
    }
};