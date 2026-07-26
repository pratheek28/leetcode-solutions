# Last updated: 7/25/2026, 7:29:44 PM
class Solution:
    def isPalindrome(self, x: int) -> bool:
        new_str = ""
        x = str(x)
        indx = len(x)
        while (indx > 0):
            new_str += x[indx - 1]
            indx -= 1

        if (x == new_str):
            return True
        else:
            return False

