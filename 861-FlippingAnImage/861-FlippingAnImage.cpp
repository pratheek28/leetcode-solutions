// Last updated: 7/25/2026, 7:27:19 PM
class Solution {
    void invertVec(vector<int>& vec) {
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] == 0) vec[i] = 1;
            else vec[i] = 0;
        }
    }
    void reverseVec(vector<int>& vec) {
        int lo = 0;
        int hi = vec.size() - 1;

        while (lo <= hi) {
            swap(vec[lo], vec[hi]);
            lo++;
            hi--;
        }
    }
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (vector<int>& vec : image) {
            reverseVec(vec);
            invertVec(vec);
        }
        return image;
    }
};