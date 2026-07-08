#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<ranges>
using namespace std;

class Solution {
 public:
  int findMaxForm(vector<string>& strs, int m, int n) {
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    for (const string& s : strs) {
      const int zeros = ranges::count(s, '0');
      const int ones = s.length() - zeros;
      for (int i = m; i >= zeros; --i)
        for (int j = n; j >= ones; --j)
          dp[i][j] = max(dp[i][j], dp[i - zeros][j - ones] + 1);
    }

    return dp[m][n];
  }
};

int main() {
  Solution sol;
  vector<string> strs = {"10", "0001", "111001", "1", "0"};
  int m = 5, n = 3;
  cout << sol.findMaxForm(strs, m, n) << endl; // Output: 4
  return 0;
}