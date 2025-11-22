#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        for (int x : nums) {
            int rem = x % 3;
            if (rem) {
                ans += min(rem, 3 - rem);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 5, 6, 7, 8};
    cout << sol.minimumOperations(nums) << endl; // Output the minimum operations
    return 0;
}