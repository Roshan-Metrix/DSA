#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int cnt[value];
        memset(cnt, 0, sizeof(cnt));
        for (int x : nums) {
            ++cnt[(x % value + value) % value];
        }
        for (int i = 0;; ++i) {
            if (cnt[i % value]-- == 0) {
                return i;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, -10, 7, 13, 6, 8};
    int value = 5;
    cout << sol.findSmallestInteger(nums, value) << endl; // Output: 4
    return 0;
}