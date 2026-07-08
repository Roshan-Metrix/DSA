#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int ans = nums.size();

    for (int i = 0; i < nums.size(); ++i)
      ans ^= i ^ nums[i];

    return ans;
  }

int main() {
    vector<int> nums = {3,0,1};
        cout << missingNumber(nums);
}


