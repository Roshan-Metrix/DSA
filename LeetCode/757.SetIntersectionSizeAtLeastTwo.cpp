#include<iostream>
#include<vector>
#include<algorithm>
#include<ranges>
using namespace std;

class Solution {
 public:
  int intersectionSizeTwo(vector<vector<int>>& intervals) {
    int ans = 0;
    int mx = -1;
    int secondMax = -1;

    ranges::sort(intervals, ranges::less{}, [](const vector<int>& interval) {
      const int start = interval[0];
      const int end = interval[1];
      return pair<int, int>{end, -start};
    });

    for (const vector<int>& interval : intervals) {
      const int start = interval[0];
      const int end = interval[1];
      if (mx >= start && secondMax >= start)
        continue;
      if (mx >= start) {
        secondMax = mx;
        mx = end; 
        ans += 1;
      } else { 
        mx = end;             
        secondMax = end - 1;  
        ans += 2;
      }
    }

    return ans;
  }
};

int main() {
  Solution sol;
  vector<vector<int>> intervals = {{1, 3}, {1, 4}, {2, 5}, {3, 5}};
  cout << sol.intersectionSizeTwo(intervals) << endl; // Output: 3
  return 0;
}