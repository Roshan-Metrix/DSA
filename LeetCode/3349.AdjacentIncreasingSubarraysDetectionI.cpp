#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
 public:
  bool hasIncreasingSubarrays(vector<int>& nums, int k) {
    int increasing = 1;
    int prevIncreasing = 0;

    for (int i = 1; i < nums.size(); ++i) {
      if (nums[i] > nums[i - 1]) {
        ++increasing;
      } else {
        prevIncreasing = increasing;
        increasing = 1;
      }
      if (increasing / 2 >= k || min(prevIncreasing, increasing) >= k)
        return true;
    }

    return false;
  }
};

int main(){
    vector<int> nums = {2,5,7,8,9,2,3,4,3,1};
    int k = 3;
    Solution sol;
    cout << sol.hasIncreasingSubarrays(nums,k); // 1 -> True
}