#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference,
                            int valueDifference) {
        int n = nums.size();
        int minIndex = 0, maxIndex = 0;

        for (int i = indexDifference; i < n; ++i) {
            if (nums[i - indexDifference] < nums[minIndex]) {
                minIndex = i - indexDifference;
            }
            if (nums[i - indexDifference] > nums[maxIndex]) {
                maxIndex = i - indexDifference;
            }
            if (abs(nums[i] - nums[minIndex]) >= valueDifference) {
                return {minIndex, i};
            }
            if (abs(nums[i] - nums[maxIndex]) >= valueDifference) {
                return {maxIndex, i};
            }
        }
        return {-1, -1};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 6, 2, 5};
    int indexDifference = 2;
    int valueDifference = 4;
    vector<int> result = sol.findIndices(nums, indexDifference, valueDifference);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}