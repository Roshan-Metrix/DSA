#include<iostream>
#include<vector>
using namespace std;

// Linear Search 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i] == target) return i;
        }
                return -1;
    }
};

int main(){
    vector<int> nums = {-1,0,2,4,6,8};
    int target = 4;
    Solution sol;
    cout << sol.search(nums,target);
}