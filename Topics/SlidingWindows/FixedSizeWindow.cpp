#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int>& nums, int k) {
    int n = nums.size();

    // Calculate sum of first window
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += nums[i];
    }

    int maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowSum += nums[i];       // add next element
        windowSum -= nums[i - k];   // remove first element

        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 3;

    cout << "Maximum sum: " << maxSumSubarray(nums, k);

    return 0;
}