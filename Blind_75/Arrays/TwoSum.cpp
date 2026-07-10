#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Hashmap approach 
// Time Complexity : O(n)
class Solution{
    public:
    vector<int> twoSum(vector<int> nums, int k){
        unordered_map<int, int> mp;
    for(int i = 0; i < nums.size(); i++){
        int comp = k - nums[i];
        if(mp.find(comp) != mp.end()){
            return {mp[comp], i};
        }
        mp[nums[i]] = i;
    }
   return {};
}
};

int main(){
    Solution S;
    vector<int> nums = {1,3,2,7};
    int target = 9;
    vector<int> ans = S.twoSum(nums, target);
    for(int a : ans){
        cout << a << " ";
    }
    return 0;
}