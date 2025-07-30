// Three Method to solve
// 1. Bruteforce method 0(nlogn)
// 2. By sorting (using inbuilt func method from c++)  0(n)
// Moore's voting algorithm 0(n)
// 

#include<iostream>
#include<vector>
#include<algorithm> //for func sort();
using namespace std;


// BruteForce Method

// int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         for(int val : nums){
//              int freq = 0;
//             for(int el : nums){
//                 if(el == val){
//                     freq++;
//                 }
//         }
//         if(freq > n/2){
//             return val;
//         }
//     }
//     return -1;
// }



// By shorting 

// int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         // sort
//         sort(nums.begin(),nums.end());

//         // freq count
//         int freq = 1,ans = nums[0];
//         for(int i=1;i<n;i++){
//             if(nums[i] == nums[i-1]){
//                 freq++;
//             } else{
//                 freq=1;
//                 ans=nums[i];
//             }
//             if(freq > n/2){
//                 return ans;
//             }
//         }
// return 0;
// }



// Moore's voting algorithm

int majorityElement(vector<int>& nums) {
   int freq = 0, ans=0;

   for(int i=0;i<nums.size();i++){
    if(freq == 0){
        ans = nums[i];
    }
    if(ans == nums[i]){
        freq++;
    }else{
        freq--;
    }
   }
return ans;
}



int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums) ;
}

