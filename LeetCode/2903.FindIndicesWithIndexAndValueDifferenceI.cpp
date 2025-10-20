#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (abs(i - j) >= indexDifference && abs(nums[i] - nums[j]) >= valueDifference) {
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};


int main() {
    Solution sol;
    vector<int> nums = {0};
    int indexDifference = 0;
    int valueDifference = 0;
    vector<int> result = sol.findIndices(nums, indexDifference, valueDifference);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl; // Output: [0, 3]
    return 0;
}