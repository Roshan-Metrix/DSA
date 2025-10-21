#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        unordered_map<int, int> cnt;
        map<int, int> d;

        for (int x : nums) {
            cnt[x]++;
            d[x];
            d[x - k]++;
            d[x + k + 1]--;
        }

        int ans = 0, s = 0;
        for (const auto& [x, t] : d) {
            s += t;
            ans = max(ans, min(s, cnt[x] + numOperations));
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 4};
    int k = 5;
    int numOperations = 2;
    cout << sol.maxFrequency(nums, k, numOperations) << endl; // Output: 3
    return 0;
}