#include<iostream>
#include<vector>
using namespace std;

class Solution {
 public:
  vector<bool> prefixesDivBy5(vector<int>& nums) {
    vector<bool> ans;
    int curr = 0;

    for (const int num : nums) {
      curr = (curr * 2 + num) % 5;
      ans.push_back(curr % 5 == 0);
    }

    return ans;
  }
};

int main(){
    vector<int> nums = {0,1,1};
    Solution sol;
    vector<bool> result = sol.prefixesDivBy5(nums);
    for(int val : result){
        cout << val << " ";
    }
    return 0;
}