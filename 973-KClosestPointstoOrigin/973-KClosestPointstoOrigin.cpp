// Last updated: 8/16/2026, 5:23:05 PM
1class Solution {
2    struct ComparePoints {
3        bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
4            return p1.second > p2.second;
5        }
6    };
7
8    int getSqrtDist(const vector<int>& points) {
9        return (points[0] * points[0]) + (points[1] * points[1]);
10    }
11public:
12    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
13        priority_queue<pair<int, int>, vector<pair<int,int>>, ComparePoints> minHeap;
14
15        for (int i = 0; i < points.size(); i++) {
16            minHeap.push({i, getSqrtDist(points[i])});
17        }
18
19        vector<vector<int>> sol;
20
21        while (!minHeap.empty() && k != 0) {
22            pair<int, int> curr = minHeap.top();
23            minHeap.pop();
24
25            sol.push_back(points[curr.first]);
26            k--;
27        }
28
29        return sol;
30    }
31};