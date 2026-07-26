// Last updated: 7/25/2026, 7:27:30 PM
class Solution {
    int getNext(vector<int>& nums, int idx) {
        for (int i = idx + 1; i < nums.size(); i++) {
            if (nums[i] > nums[idx]) return nums[i];
        }
        return -1;
    }
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> fq;

        for (int i = 0; i < nums2.size(); i++) {
            fq[nums2[i]] = i;
        }

        vector<int> res(nums1.size());

        for (int i = 0; i < nums1.size(); i++) {
            res[i] = getNext(nums2, fq[nums1[i]]);
        }

        return res;
    }
};