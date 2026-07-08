class Solution {
 public:
  long long maxRunTime(int n, vector<int>& batteries) {
    long sum = accumulate(batteries.begin(), batteries.end(), 0L);

    ranges::sort(batteries);
    while (batteries.back() > sum / n) {
      sum -= batteries.back(), batteries.pop_back();
      --n;
    }
    return sum / n;
  }
};