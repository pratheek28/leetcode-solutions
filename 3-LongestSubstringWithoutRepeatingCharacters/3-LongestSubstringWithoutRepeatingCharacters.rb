# Last updated: 10/11/2026, 10:29:58 AM
1# @param {String} s
2# @return {Integer}
3def length_of_longest_substring(s)
4    seen = {}
5    lo = 0
6    hi = 0
7    res = 0
8
9    while hi < s.size
10        if seen[s[hi]] == nil
11            seen[s[hi]] = 1
12        else
13            seen[s[hi]] += 1
14        end
15
16        while seen[s[hi]] > 1
17            seen[s[lo]] -= 1
18            lo += 1
19        end
20        
21        hi += 1
22        res = [hi - lo, res].max
23    end
24    return res
25end