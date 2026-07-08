#include <iostream>
#include <vector>
using namespace std;

// Bruteforce method

vector<int> countSmaller(vector<int>& nums) {
    int n = nums.size();
    vector<int> pushing;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[i]) {
                count++;
            }
        }
        pushing.push_back(count);
    }

    return pushing;
}

int main() {
    vector<int> nums = {5, 2, 6, 1};
    vector<int> result = countSmaller(nums);

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}