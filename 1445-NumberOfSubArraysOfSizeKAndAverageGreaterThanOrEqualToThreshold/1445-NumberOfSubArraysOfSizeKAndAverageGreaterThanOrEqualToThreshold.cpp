// Last updated: 7/25/2026, 7:27:08 PM
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int size = arr.size();
        int count = 0;
        int sum = 0;
        int avg;

        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }

        avg = sum / k;
        if (avg >= threshold) count++;

        int i = 1, j = k;

        while (j < size) {
            sum += (arr[j] - arr[i - 1]);
            avg = sum / k;

            if (avg >= threshold) count++;
            i++;
            j++;
        }
        return count;
    }
};