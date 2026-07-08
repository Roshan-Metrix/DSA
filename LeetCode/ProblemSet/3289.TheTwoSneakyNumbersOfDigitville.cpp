#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size()-1;
        sort(nums.begin(),nums.end());
        vector<int> result;
        for(int i = 0; i<n; ++i){
            if(nums[i] == nums[i+1]){
            result.push_back(nums[i]);
            }
        }
        return result;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,2,3,4,3,2,5,6,7,8,7};
    vector<int> sneakyNumbers = sol.getSneakyNumbers(nums); 
    for(int num : sneakyNumbers){
        std::cout << num << " "; // 2,3,7
    }
    return 0;
}