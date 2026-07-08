#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int mini = INT_MAX;

        for (int i = 0; i + k - 1 < n; i++) {
            int diff = nums[i + k - 1] - nums[i];
            mini = min(mini, diff);
        }

        return mini;
    }
};


int main(){
    Solution sol;
    vector<int> nums = {90};
    int k = 1;
    cout << sol.minimumDifference(nums,k);
    return 0;
}