#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0;

    for (const int num : nums)
      if (i < 1 || num > nums[i - 1])
        nums[i++] = num;

    return i;
  }

int main() {
    vector<int> nums = {1, 1, 2};
    int k = removeDuplicates(nums); // call once

    for (int i = 0; i < k; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
}



