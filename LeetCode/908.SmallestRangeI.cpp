#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxVal = *max_element(nums.begin(), nums.end());
        int minVal = *min_element(nums.begin(), nums.end());
        int newScore = max(0, (maxVal - minVal - 2 * k));
        return newScore;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 6};
    int k = 3;
    cout << sol.smallestRangeI(nums, k) << endl; // Output: 0
    return 0;
}
