// We can use Bitwise XOR logic to solve this problem i.e 
//    0 ^ 0 -> 0 
//    1 ^ 1 -> 0
//    0 ^ 1 -> 1
//    1 ^ 0 -> 1
//    n ^ n -> 0   { where n is any integer }
//    n ^ 0 -> n

#include<iostream>
#include<vector>
using namespace std;

//Leetcode given func
int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int i = 0; i < nums.size(); i++) {
        result ^= nums[i];
    }
    return result;
}
    

int main(){
    vector<int> nums = {2, 2, 1};
    int result = singleNumber(nums);
    cout << result << endl;
}
