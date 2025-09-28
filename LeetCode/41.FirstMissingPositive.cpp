#include <iostream>
#include <vector>
using namespace std;

// cycle sort method

int firstMissingPositive(vector<int>& nums) {
          int n = nums.size();
        int i = 0;

        while (i < n) {
            if (nums[i] <= 0 || nums[i] > n) {
                i++;
                continue;
            }
            int index = nums[i] - 1;
            if (nums[i] != nums[index]) {
                swap(nums[i], nums[index]);
            } else {
                i++;
            }
        }

        for (i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }

int main(){
    vector<int> nums={1,2,0};
    cout << firstMissingPositive(nums);
}