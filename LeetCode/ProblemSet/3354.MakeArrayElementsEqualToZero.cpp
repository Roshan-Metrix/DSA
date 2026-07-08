#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int s = accumulate(nums.begin(), nums.end(), 0);
        int ans = 0, l = 0;
        for (int x : nums) {
            if (x) {
                l += x;
            } else if (l * 2 == s) {
                ans += 2;
            } else if (abs(l * 2 - s) <= 1) {
                ++ans;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 0, 2, 0, 3};
    cout << sol.countValidSelections(nums) << endl; // Example usage
    return 0;
}