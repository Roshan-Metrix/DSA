#include<iostream>
#include<vector>
using namespace std; 

// Bruteforce Approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
       return {};
    }
};

// Hashmap Approach

// class Solution{
//     public:
//     vector<int> twoSum(vector<int> nums, int k){
//         unordered_map<int, int> mp;
//     for(int i = 0; i < nums.size(); i++){
//         int comp = k - nums[i];
//         if(mp.find(comp) != mp.end()){
//             return {mp[comp], i};
//         }
//         mp[nums[i]] = i;
//     }
//    return {};
// }
// };

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    Solution sol;
    cout << sol.twoSum(nums,target);
}

