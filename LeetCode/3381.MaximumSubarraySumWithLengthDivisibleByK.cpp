class Solution {
 public:
  long long maxSubarraySum(std::vector<int>& nums, int k) {
    long ans = LONG_MIN;
    long prefix = 0;
    vector<long> minPrefix(k, LONG_MAX / 2);
    minPrefix[k - 1] = 0;

    for (int i = 0; i < nums.size(); ++i) {
      prefix += nums[i];
      ans = max(ans, prefix - minPrefix[i % k]);
      minPrefix[i % k] = min(minPrefix[i % k], prefix);
    }

    return ans;
  }
};