class Solution {
 public:
  int numberOfSubstrings(string s) {
    int ans = 0;
    vector<int> lastSeen(3, -1);

    for (int i = 0; i < s.length(); ++i) {
      lastSeen[s[i] - 'a'] = i;
      ans += 1 + ranges::min(lastSeen);
    }

    return ans;
  }
};