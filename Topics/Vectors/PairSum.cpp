// Return pair in sorted array with target sum.
// To find the pair sum of given target
// eg: [2,4,5,6] target= 8;  ans => [0,2] (index) 

#include<iostream>
#include<vector>
using namespace std;

// Brute force method
// Time complexity 0(n2)

// vector<int> pairSum(vector<int> nums,int target){
//     vector<int> ans;
//      for(int i=0;i<nums.size();i++){
//       for(int j=i+1;j<nums.size();i++){
//         if(nums[i]+nums[j] == target){
//             ans.push_back(i);
//             ans.push_back(j);
//              return ans;         
//         }
//       }
//     }
//     return ans;
// }



// Time complexity 0(n)

vector<int> pairSum(vector<int> nums,int target){
    vector<int> ans;
   int n= nums.size();
   int i = 0,j=n-1;
   while(i < j){
    int pairSum = nums[i] + nums[j];
    if(pairSum > target){
       j--;
    } else if(pairSum < target){
      i++;
    } else{
      ans.push_back(i);
      ans.push_back(j);
      return ans;
    }
   }
   return ans;
}



int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = pairSum(nums,target);
  cout << "[" << ans[0] << "," << ans[1] << "]";
   return 0;
}