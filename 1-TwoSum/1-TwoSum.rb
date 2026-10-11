# Last updated: 10/11/2026, 9:50:59 AM
1# @param {Integer[]} nums
2# @param {Integer} target
3# @return {Integer[]}
4def two_sum(nums, target)
5    hashMap = {}
6    
7    nums.each_with_index do |num, index|
8        if hashMap[target - num] != nil
9            return [index, hashMap[target - num]]
10        end
11        hashMap[num] = index;
12    end
13end