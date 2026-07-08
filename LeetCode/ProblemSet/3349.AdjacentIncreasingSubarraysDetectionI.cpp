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


// class Solution {
// public:
//     bool hasIncreasingSubarrays(vector<int>& nums, int k) {
//         int mx = 0, pre = 0, cur = 0;
//         int n = nums.size();
//         for (int i = 0; i < n; ++i) {
//             ++cur;
//             if (i == n - 1 || nums[i] >= nums[i + 1]) {
//                 mx = max({mx, cur / 2, min(pre, cur)});
//                 pre = cur;
//                 cur = 0;
//             }
//         }
//         return mx >= k;
//     }
// };