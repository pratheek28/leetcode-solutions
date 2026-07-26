# Last updated: 7/25/2026, 7:29:50 PM
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        hashMap = {}
        lo = 0
        hi = 0
        result = 0
        curr = 0

        while hi < len(s):
            if  s[hi] not in hashMap or hashMap[s[hi]] == 0:
                curr += 1
                result = max(result, curr)
                hashMap[s[hi]] = 1
                hi += 1
            else:
                hashMap[s[lo]] = 0
                lo += 1
                curr -= 1
        
        return max(curr, result)
                
        