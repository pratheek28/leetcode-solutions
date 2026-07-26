# Last updated: 7/25/2026, 7:29:52 PM
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = {}
        for i, num in enumerate(nums):
            if (target - num) in hashMap:
                return [i, hashMap[target - num]]
            hashMap[num] = i
        return []
        