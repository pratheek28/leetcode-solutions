# Last updated: 7/25/2026, 7:29:48 PM
class Solution:
    def expandAroundCenter(self, s:str, l: int, r: int) -> int:
        while l >= 0 and r < len(s) and s[l] == s[r]:
            l -= 1
            r += 1
        return r - l - 1

    def longestPalindrome(self, s: str) -> str:
        start = 0
        end = 0

        for i in range(len(s)):
            odd = self.expandAroundCenter(s, i, i)
            even = self.expandAroundCenter(s, i, i + 1)

            maximumVal = max(even, odd)
            if maximumVal > end - start:
                start = i - (maximumVal- 1) // 2
                end = i + (maximumVal // 2)
        
        return s[start : end + 1]

        
        