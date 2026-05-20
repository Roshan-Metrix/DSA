// Eg. Maximum Sum of Subarray of Size K
// Input: arr = [2,1,5,1,3,2]
// k = 3
// Output: 9 (subarray with maximum sum is [5,1,3])

#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int>& arr, int k) {
    int left = 0;
    int sum = 0;
    int maxSum = 0;

    for(int right = 0; right < arr.size(); right++) {

        sum += arr[right];

        // Window size reached
        if(right - left + 1 == k) {

            maxSum = max(maxSum, sum);

            // Remove left element
            sum -= arr[left];

            left++;
        }
    }

    return maxSum;
}

int main() {
    vector<int> arr = {2,1,5,1,3,2};

    cout << maxSumSubarray(arr, 3);
}