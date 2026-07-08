#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
       int a = nums[n-1] * nums[n-2] * nums[n-3];
       int b = nums[n-1] * nums[0] * nums[1];
      return max(a,b);
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,2,3,4};
    cout<<sol.maximumProduct(nums)<<endl;
    return 0;
}   