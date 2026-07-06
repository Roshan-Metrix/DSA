class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 if (a[0] == b[0])
                     return a[1] > b[1];
                 return a[0] < b[0];
             });
             
        int ans = 1;
        int right = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][1] <= right) {
            } else {
                ans++;
                right = intervals[i][1];
            }
        }

        return ans;
    }
};