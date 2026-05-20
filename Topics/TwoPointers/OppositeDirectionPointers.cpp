// Find if there exists a pair whose sum equals target.
// Input: [1, 2, 4, 6, 10]
// target = 8
// Output: Pair Found (2 + 6 = 8)

#include <iostream>
#include <vector>
using namespace std;

bool hasPairSum(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while(left < right) {
        int sum = arr[left] + arr[right];

        if(sum == target) {
            return true;
        }
        else if(sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return false;
}

int main() {
    vector<int> arr = {1, 2, 4, 6, 10};

    if(hasPairSum(arr, 8))
        cout << "Pair Found";
    else
        cout << "Pair Not Found";
}