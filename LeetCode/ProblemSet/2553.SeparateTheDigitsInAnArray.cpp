#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;
        for(int val : nums){
            vector<int> temp;
            while(val > 0){
                temp.push_back(val % 10);
                val /= 10;
            }
            for(int i = temp.size()-1; i >= 0; i--){
                result.push_back(temp[i]);
            }
        }
        return result;
    }
};

int main(){
   vector<int> nums = {13,25,83,77};
   Solution sol;
   vector<int> result = sol.separateDigits(nums);
   for(int val : result){
    cout << val << " ";
   }
   return 0;
}