// We can use 2 method 
//   - Brute Force Method     0(n^2)
//   - Kadane's Algorithm     0(n)
// 

#include<iostream>
#include<vector>
using namespace std;

// Brute Force Method - Time Complexity 0(n2)


int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    for(int st=0;st<nums.size();st++){
        int currSum = 0;
        for(int end=st;end<nums.size();end++){
            currSum += nums[end];
            maxSum = max(currSum,maxSum);
        }
    }  
    return maxSum;
    }



// - Kadane's Algorithm - Time Complexity 0(n2)


// int maxSubArray(vector<int>& nums) {
//     int maxSum = INT_MIN;
//     int currSum=0;
//     for(int i=0;i<nums.size();i++){
//             currSum += nums[i];
//             maxSum = max(currSum,maxSum);
//             if(currSum < 0){
//                 currSum = 0;
//         }

//     }  
//     return maxSum;
//     }

int main(){
    // vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> nums = {1,2,-3,4,5};
    cout << maxSubArray(nums) << endl;
}

